#include <cmath>
#include<iostream>
using namespace std;
/**
 * @fn
 * これは本番中でかいたやつで、ACです。
 * ACですが別解きになるので以下に回答例とコメント残します。
 */
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

/**
 * 以下も正しい
 */
int main(){
  long long n;
  cin >> n;
  for(int i=60;i>=0;i--){
    if(n&(1ll<<i)){cout << i << '\n';break;}
  }
  return 0;
}