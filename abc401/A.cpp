#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    if (n<=299 && n>=200){
        cout << "Success";
    }
    else{
        cout << "Failure";
    }
    return 0;
}