#include <iostream>

using namespace std;

int main(){
    int N, M, i, j,k,l;
    cin >> N >> M;

    int U[M], V[M];
    for(i=0; i<M; i++){
        cin >> U[i] >> V[i];
    };

    int ans_counter=0;
    for (i=0; i<M; i++){
        int start=0;
        int meddiam=0;
        start = U[i];
        meddiam = V[i];

        //serch end candidate
        for (j=0; j<M; j++){
            if(U[j] == meddiam){
                //-> canddiate = V[j]
                for (k=0; k<M; k++){
                    if(V[k] == V[j]) {
                        if(U[k] == start){
                            ans_counter += 1;
                        }
                    }
                }
            }
        }
    };

    cout << ans_counter << endl;

    return 0;
}// namespace std;