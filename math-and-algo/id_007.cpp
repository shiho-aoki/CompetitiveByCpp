#include <iostream>

using namespace std;

int main(){
    float N, X, Y; //int同士の割算は小数点以下は切り捨てられる
    cin >> N >> X >> Y;
    int a, b, a_and_b;
    a = (int) N/X;
    b = (int) N/Y;
    a_and_b = (int) N/(X*Y);
    cout << a+b-a_and_b << endl;
    
    return 0;
}// namespace std;