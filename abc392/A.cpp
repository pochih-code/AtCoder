#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> num(3);
	for (int i = 0;i < 3; i++) {
		cin >> num[i];
	}
	sort(num.begin(), num.end());
	if (num[0] * num[1] == num[2]) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}
	return 0;
}