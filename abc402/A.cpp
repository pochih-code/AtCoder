#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i=0; i<s.length(); i++){
        if(isupper(s[i])){
            cout << s[i];
        }
    }
    return 0;
}