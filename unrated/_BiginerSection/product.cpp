#include<iostream>
using namespace std;
int main(){
    int a, b, dot;
    cin >> a >> b;
    dot = a*b;
    if (dot%2==0){
        cout << "Even" << endl;
    }else{
        cout << "Odd" << endl;
    };
    return 0;
}