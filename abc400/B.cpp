#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#define ll long long
using namespace std;

int main(){
    ll int n, m, num = 1, ans = 0;
    cin >> n >> m;
    for(ll int i=0; i<=m; i++){
        ans+=num;
        if (ans > 1e9){
            cout << "inf";
            return 0;
        }
        num*=n;
    }
    cout << ans;
    return 0;
}