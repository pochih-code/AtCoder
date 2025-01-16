# include <bits/stdc++.h>
using namespace std ;

# define ll long long

int main() {
    ll int n, d ;
    cin >> n >> d ;

    ll int t[100], l[100] ;

    for (int i = 0 ; i < n ; i++){
        cin >> t[i] >> l[i] ;
    }

    for (int k = 1 ; k <= d ; k++){
        ll int big = 0 ;
        for (int i = 0 ; i < n ; i++) {
            ll int weight = t[i] * (l[i] + k) ;
            if ( weight > big ){
                big = weight ;
            }
        }
        cout << big << "\n" ;
    }
    return 0 ;
}
