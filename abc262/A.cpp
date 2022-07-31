#include <iostream>

using namespace std;

int main(){
    int Y;
    cin >> Y;
    while(!(Y%4 == 2)){
        Y = Y+1;
    }
    cout << Y << endl;
    return 0;
}// namespace std;