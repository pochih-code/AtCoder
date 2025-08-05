#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    bool flag = false;
    while(n--){
        string cmd;
        cin >> cmd;
        if (cmd == "login"){
            flag = true;
        }
        if (cmd == "logout"){
            flag = false;
        }
        if ((cmd == "private") && (flag == false)){
            sum++;
        }
    }
    cout << sum;
    return 0;
}