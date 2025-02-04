#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n, m ;
    cin >> n >> m ;
    vector<string> s(n), t(m) ;
    for (int i = 0 ; i < n ; i++) cin >> s[i] ;
    for (int i = 0 ; i < m ; i++) cin >> t[i] ;

    auto check = [&](int a, int b) -> bool{
        for (int i = 0 ; i < m ; i++){
            for (int j = 0 ; j < m ; j++){
                if (s[a+i][b+j] != t[i][j]) return false ;
            }
        }
        return true ;
    } ;

    for (int i = 0 ; i + m - 1 < n ; i++){
        for (int j = 0 ; j + m - 1 < n ; j++){
            if (check(i, j)){
                cout << i + 1 << " " << j + 1 << "\n" ;
            }
        }
    }
    return 0 ;
}
