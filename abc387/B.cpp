// ��???????????????
// ��?????????��???
// ��??��?��???????
// �j??��?�X?�J??? 
# include <bits/stdc++.h>
using namespace std ;

# define ll long long

int main(){
    ll int n, total = 0 ;
    cin >> n ;
    for (int i = 1 ; i <= 9 ; i++){
        for (int j = 1 ; j <= 9; j++){
            if (i * j == n){
                total -= i * j ;
            }
            total += i * j ;
        }
    }
    cout << total << "\n" ;
    return 0 ;
}