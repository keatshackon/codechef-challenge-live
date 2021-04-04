#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t,  i, j, k, l, a, b, n, q;
	cin >> t;

	while (t--) {
		cin >> a >> b >> n;

		map<int, int> m1;
		map<int, int> m2;

		for (int i = 0; i < a; i++) {
			cin >> q;
			++m1[q];
		}
		for (int i = 0; i < b; i++) {
			cin >> q;
			++m2[q];
		}
		ll res = 0;
		for (auto q : m1) {
			if (m2.count(q.first) == 0) {
				res += pow(2, q.first);
			}
		}

		for (auto q : m2) {
			if (m1.count(q.first) == 0) {
				res += pow(2, q.first);
			}
		}

		cout << res*n << "\n";
	}

}