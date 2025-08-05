#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#define ll long long
using namespace std;

int main(){
    ll int n, sum=0;
    cin >> n;
    if (n>=2){
        sum = sqrtl(n/2);
    }
    if (n>=4){
        sum+=sqrtl(n/4);;
    }
    cout << sum;
    return 0;
}