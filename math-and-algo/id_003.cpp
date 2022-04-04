#include<iostream>

using namespace std;

int main(){
    int N, A[N], sum, i;

    cin >> N;
    for(i=0; i<N; i++){
        cin >>A[i];
    };
    sum =0;
    for(i=0;i<N;i++){
        sum += A[i];
    };
    cout << sum << endl;

    return 0;
} // namespace std;