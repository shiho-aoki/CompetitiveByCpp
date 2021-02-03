#include<iostream>
using namespace std;
int main(){
    int N, disp=0;
    int a[201];
    cin >> N;
    for (int i=0; i<N; i++){
        cin >>a[i];
    };
    int odd=0;
    for (int n=0; n<N; n++){
        if((a[n]%2)!=0){
            odd +=1;
            break;
        }
    }

    while (odd==0)
    {
        for (int n=0; n<N; n++){
            a[n] = a[n]/2;
            if ((a[n]%2)!=0){
                odd +=1;
            }     
        }
        disp+=1; 
    }
    cout << disp << endl;
    return 0;
}