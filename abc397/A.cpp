#include <bits/stdc++.h>
using namespace std;

int main() {
	double n;
	cin >> n;
	if (n >= 38.0) {
		cout << "1\n";
	}
	if (n >= 37.5 && n < 38.0) {
		cout << "2\n";
	}
	if (n < 37.5) {
		cout << "3\n";
	}
	return 0;
}