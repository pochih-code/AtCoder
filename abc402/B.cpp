#include<iostream>
#include<queue>
using namespace std;

int main(){
    int n;
    cin >> n;
    queue<int> q;
    while(n--){
        int cmd, tick;
        cin >> cmd;
        if(cmd == 1){
            cin >> tick;
            q.push(tick);
        }
        else if(cmd == 2){
            cout << q.front() << "\n";
            q.pop();
        }
    }
    return 0;
}