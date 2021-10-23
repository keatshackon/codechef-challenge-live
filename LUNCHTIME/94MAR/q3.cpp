#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, m, i, k, l, q;
	cin >> t;
	while (t--) {
		cin >> n;
		int f = 0;
		int sum = 0;
		vector<int> v;
		while (n--) {
			cin >> q;
			sum += q;
			if (q == 2) {
				f = 1;
			}
			v.push_back(q);
		}
		if (sum % 2 == 0) {
			cout << 0 << "\n";
		} else {
			if (f == 1) {
				cout << 1 << "\n";
			} else {
				cout << -1 << "\n";
			}
		}
	}
	return 0;

}