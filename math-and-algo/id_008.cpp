#include <iostream>

using namespace std;

int main () {
    int N, S;
    // int counter=0; it's an mistake of var
    long long counter=0;
    cin >> N >> S;

    int red_i, blue_i;
    for(red_i=1; red_i<=N; red_i++){
        for (blue_i=1; blue_i<=N; blue_i++){
            if(red_i + blue_i <= S){
                counter ++;
            }else{
                break;
            }
        }
    }

    cout << counter << endl;

    return 0;
}