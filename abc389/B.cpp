// 夢ならばどれほどよかったでしょう
// 未だにあなたのことを夢にみる
// 忘れた物を取りに帰るように
// 古びた思い出の埃を払う 
# include <bits/stdc++.h>
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
