#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n ;
    cin >> n ;

    vector<int> A(n) ;
    for (int i = 0 ; i < n ; i++){
        cin >> A[i] ;
    }

    vector<int> B = A ;
    ll int cnt = 0 ;
    for (int i = 0 ; i < n ; i++){
        int idx = lower_bound(B.begin(), B.end(), A[i]*2) - B.begin() ;
        cnt += (n - idx) ;
    }

    cout << cnt << endl ;

    return 0 ;
}
