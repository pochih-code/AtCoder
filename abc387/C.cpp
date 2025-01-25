// 夢???????????????
// 未?????????夢???
// 忘??物?取???????
// 古??思?出?埃??? 
# include <bits/stdc++.h>
using namespace std ;

# define ll long long

bool isSnake(ll int n){
    string c = to_string(n) ;
    char top = c[0] ;
    for(int i = 1 ; i < c.size() ; i++){
        if (c[i] >= top){
            return false ;
        }
    }
    return true ;
}

int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(0) ;

    ll int L, R, count = 0 ;
    cin >> L >> R ;
    for (int i = L ; i <= R ; i++){
        if (isSnake(i)){
            count++ ;
        }
    }
    cout << count << "\n" ;
    return 0 ;
}