/*
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int max(int a, int j){
    if(a==j){
        return 1;
    }
    return 0;
}

int min(int a, int i){
    if(a==i){
        return 1;
    }
    return 0;
}

int main(){
    __int32_t N;
    int i;
    cin >> N;

    int a[N];
    for(i=0; i<N; i++){
        cin >> a[i];
    };
    int j;
    int ans_counter = 0;

    for (i=0; i<N-1; i++){
        for(j=i+1; j<N; j++){
            int min_, max_;
            if(a[i] > a[j]){
                min_ = min(a[j], i+1);
                max_ = max(a[i], j+1);
                if(min_+max_ == 2){
                    ans_counter +=1;
                };
            }else{
                min_ = min(a[i], i+1);
                max_ = max(a[j], j+1);
                if(min_+max_ == 2){
                    ans_counter +=1;
                };
            }
        }
    }
    cout << ans_counter << endl;
    return 0;
}// namespace std;
*/

# include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    int same = 0;

    for (int i=0; i<n; ++i){
        cin >> a[i];
        a[i] -= 1;
        if(a[i] == i){
            same += 1;
        }
    }

    long long ans = (long long)same * (same -1) /2;
    for(int i=0; i<n; ++i){
        if(a[i]>i and a[a[i]] == i){
            ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}