#include <cmath>
#include<iostream>
using namespace std;
int main(){
    unsigned long long N, k, i;
    unsigned long long left, ans;
    cin >> N;

    if (N==1){
        cout << 0 << endl;
    }else{
        k = N/2;
        for (i=1; i<k, i++;){
            left = pow(2, i);
            if (left <= N){
                continue;
            }else{
                ans = i -1;
                cout << ans << endl;
                break;
            }
        }
    }

    return 0;
}