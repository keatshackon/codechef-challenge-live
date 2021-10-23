#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, q, x, n;
	cin >> t;
	while (t--) {
		cin >> n >> x;
		map<int, int> m1;
		map<int, int> m2;
		for (int i = 0; i < n; i++) {
			cin >> q;
			++m1[q];
			m2[q] = 1;
		}
		if (n == 1) {
			cout << 1 << " " << 0 << "\n";
			continue;
		}
		int ans = 0;
		int chg = 0;
		for (auto q : m1) {
			if (q.second > ans) {
				ans = q.second;
			}
		}
		if (x == 0) {
			cout << ans << " " << 0 << "\n";
			continue;
		}

		for (auto it : m1) {
			if (m2[(it.first)^x] == 1) {
				if (it.second + m1[(it.first)^x] > ans) {
					ans = it.second + m1[(it.first)^x];
					chg = min(it.second, m1[(it.first)^x]);
				}
				else if (it.second + m1[(it.first)^x] == ans) {
					if (min(it.second, m1[(it.first)^x]) < chg) {
						chg = min(it.second, m1[(it.first)^x]);
					}
				}
			}
		}

		cout << ans << " " << chg << endl;
	}
	return 0;
}