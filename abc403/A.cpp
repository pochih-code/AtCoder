#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n, sum=0;
    cin >> n;
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        if(i % 2==0){
            sum += num;
        }
    }
    cout << sum;
    return 0;
}