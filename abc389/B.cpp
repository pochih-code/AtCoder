#include <bits/stdc++.h>
using namespace std ;

# define ll long long

int main(){
    ll int n, ans = 1, num =1 ;
    cin >> n ;
    while ( num != n ){
        ans += 1 ;
        num *= ans ;
    }
    cout << ans << "\n" ;
    return 0 ;
}
