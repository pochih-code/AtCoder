#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> n(5);
	for (int i = 0;i < 5; i++) {
		cin >> n[i];
	}
	bool check = false;
	vector<int> correct = { 1, 2, 3, 4, 5 };

	for (int i = 0; i + 1 < 5; i++) {
		vector <int> m = n;
		swap(m[i], m[i + 1]);

		if (m == correct) {
			check = true;
		}
	}
	if (check) {
		cout << "Yes\n";
	}
	else {
		cout << "No\n";
	}
	return 0;
}