#include <bits/stdc++.h>
using namespace std ;

int main(){
    string s ;
    cin >> s ;
    // ASCII code of '0' is 48
    int n1 = s[0] - '0' ;
    int n2 = s[2] - '0' ;
    cout << n1 * n2 << "\n" ;
    return 0 ;
}