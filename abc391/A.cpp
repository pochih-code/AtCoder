# include <bits/stdc++.h>
using namespace std ;

int main(){
    string s ;
    cin >> s ;
    if (s[0] == 'N') cout << "S" ;
    if (s[0] == 'S') cout << "N" ;
    if (s[0] == 'W') cout << "E" ;
    if (s[0] == 'E') cout << "W" ; 

    if (s[1] == 'N') cout << "S" ;
    if (s[1] == 'S') cout << "N" ;
    if (s[1] == 'W') cout << "E" ;
    if (s[1] == 'E') cout << "W" ; 

    return 0 ;
}