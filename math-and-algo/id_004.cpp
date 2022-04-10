#include <iostream>

using namespace std;

int main(){
    int N = 3;
    int A[N], i, ans;
    for (i=0; i<N; i++){
        cin >>A[i];
    };
    ans = 1;
    for (i=0; i<N; i++){
        ans *= A[i];
    }
    cout << ans << endl;
    return 0;
}// namespace std;