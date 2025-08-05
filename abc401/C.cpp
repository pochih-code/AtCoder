#include<iostream>
#define N 1000010
#define mod 1000000000
using namespace std;

int main(){
    int n, k, a[N];
	cin >> n >> k;
	for (int i=1; i<=k; i++){
        a[i] = a[i-1]+1;
    }
	for (int i=k+1; i<=n+1; i++){
        a[i] = (2 * a[i-1] - a[i-k-1]) % mod;
    }
	cout << (a[n+1] - a[n] + 2 * mod) % mod;
	return 0;
}