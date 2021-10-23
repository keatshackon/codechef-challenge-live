#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, k, l, i, q, m;
	cin >> t;
	while (t--) {
		cin >> n >> m >> q;

		vector<int> v(n + 2, 0);
		int cnt = 0;
		int f = 1;
		char ch, space;
		while (q--) {

			cin >> ch >> i;
			cout << ch << i;

			if (ch == '+') {
				cnt++;
				if (cnt <= m and v[i] == 0) {
					v[i] = 1;
				} else {
					cout << "Inconsistent\n";
					f = 0;
					break;
				}
			} else {
				cnt--;
				if (cnt <= m and v[i] > 0) {
					--v[i];
				} else {
					cout << "Inconsistent\n";
					f = 0;
					break;
				}
			}
		}
		if (f == 1) {
			cout << "Consistent\n";
		}

	}

	return 0;

}
