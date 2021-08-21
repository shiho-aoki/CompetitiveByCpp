#include <vector>
#include<iostream>
#include <algorithm>

using namespace std;
int gcd(int a_i, int k){
    int r, tmp;
    if(a_i<k){
        tmp = a_i;
        a_i = k;
        k = tmp;
    }
    r = a_i % k;
    while(r!=0){
        a_i = k;
        k = r;
        r = a_i % k;
    }
    return k;
}

int main(){
    int N, M, j;
    cin >> N >>M;
    vector<int> A(N);
    vector<int> ans;
    for (int i =0; i<N; i++){
        cin >> j;
        A[i] = j;
    };

    int gcd_ans;
    ans.push_back(1);
    for (int k=2; k<M; k++){
        int gcd_ans_flag = 0;
        for(int i=0; i<N; i++){
            gcd_ans = gcd(A[i], k);
            gcd_ans_flag += gcd_ans;
        }
        if (gcd_ans_flag==N){
            ans.push_back(k);
        }
    };

    size_t size = ans.size();
    cout << size << endl;
    int size_ = size;
    for (int i=0; i< size_; i++){
        cout << ans[i] << endl;
    }
    return 0;
}