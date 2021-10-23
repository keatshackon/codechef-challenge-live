#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		string s;
		cin >> s;

		int a = 0;
		int b = 0;
		int k1 = 0;
		int k2 = 0;
		int f = 0;
		if (s.length() == 1) {
			cout << -1 << " " << -1 << "\n";
			continue;
		}
		for (int i = 0; i < s.length(); i++) {
			a = 0;
			b = 0;
			if (s[i] == 'a') {
				a++;
			} else {
				b++;
			}
			for (int j = i + 1; j < s.length(); j++) {

				if (s[j] == 'a') {
					a++;
				} else {
					b++;
				}

				if (a == b) {
					k1 = i;
					k2 = j;
					f = 1;
					break;
				}
			}
			if (f == 1) {
				break;
			}

		}
		if (f == 1) {
			cout << k1 + 1 << " " << k2 + 1 << "\n";
		} else {
			cout << -1 << " " << -1 << "\n";
		}

	}
	return 0;

}