#include<iostream>
using namespace std;
int main(){
    char s[3];
    int count=0,i;
    cin >> s;
    for (i=0;i<3;i++){
        if (s[i]=='1'){
            count +=1;
        };
    };
    cout << count << endl;
}