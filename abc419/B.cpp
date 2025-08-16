#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    vector<int> v;
    cin >> n;
    while(n--){
        int cmd;
        cin >> cmd;
        if(cmd == 1){
            int data;
            cin >> data;
            v.push_back(data);
        }
        else if(cmd == 2){
            sort(v.begin(), v.end());
            auto it = v.begin();
            cout << v[0] << "\n";
            v.erase(v.begin());
        }
    }
    return 0;
}