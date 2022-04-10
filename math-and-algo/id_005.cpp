#include <iostream>

using namespace std;

int main(){
    int N, i, sum;
    cin >> N;
    int a[N];
    for(i=0; i<N; i++){
        cin >> a[i];
    }
    sum=0;
    for (i=0; i<N; i++){
        sum += a[i];
    }
    cout << sum%100 << endl;
    return 0;
}// namespace std;