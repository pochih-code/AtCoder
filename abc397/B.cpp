#include <bits/stdc++.h>
using namespace std;

int main() {
	string word;
	cin >> word;
	int n = word.length();
	int l = 0;
	int pos = 0;

	while (pos < n) {
		char expect = (l % 2 == 0 ? 'i' : 'o');
		if (word[pos] == expect) {
			pos++;
		}
		l++;
	}
	if (l % 2 == 1) {
		l++;
	}
	cout << l - n << "\n";
	return 0;
}