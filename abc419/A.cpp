#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string s;
    cin >> s;
    if(s == "red"){
        cout << "SSS";
    }
    else if(s == "blue"){
        cout << "FFF";
    }
    else if(s == "green"){
        cout << "MMM";
    }
    else{
        cout << "Unknown";
    }
    return 0;
}