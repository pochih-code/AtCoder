#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long int> num(n);
    for (int i = 0; i < n; i++) {
        cin >> num[i];
    }

    if (n <= 2) {
        cout << "Yes\n";
        return 0;
    }

    bool check = true;
    for (int i = 2; i < n; i++) {
        if (num[i] * num[0] != num[i - 1] * num[1]) {
            check = false;
            break;
        }
    }

    cout << (check ? "Yes" : "No") << "\n";
    return 0;
}
