#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    if (400 % n == 0){
        cout << 400 / n ;
    }
    else {
        cout << "-1" ;
    }
    return 0;
}