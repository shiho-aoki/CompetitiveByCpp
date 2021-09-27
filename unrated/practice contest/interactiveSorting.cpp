#include <cstdio>
#include<iostream>
using namespace std;

int main () {
    int N, Q, i, j;
    cin >> N >> Q;

    string s;
    for (i=0; i<N; i++) s+= (char)('A'+i);
    for (i=0; i<N; i++){
        for (j=0; i<N-1; j++){
            cout << "? %c %c\n", s[j], s[j+1];
            fflush(stdout);
            char ans;
            cin >> ans;
            if(ans=='>') swap(s[j], s[j+1]);
        }
    }
    cout << "! %s\n", s.c_str();
    fflush(stdout);
    return 0;
}