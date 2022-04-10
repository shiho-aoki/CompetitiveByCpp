#include<iostream>

using namespace std;

int main(){
    int N, sum, i;

    cin >> N;
    /* this code creat an Segmentation fault 
        in case of:  A[N]
    */
    // for(i=0; i<N; i++){
    //     cin >> A[i];
    // };
    int A[N];
    for(i=0; i<N; i++){
        cin >> A[i];
    };

    sum = 0;
    for(i=0; i<N; i++){
        sum += A[i];
    };
    cout << sum << endl;

    return 0;
} // namespace std;