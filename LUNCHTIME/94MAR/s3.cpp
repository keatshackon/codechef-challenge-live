#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main() {

	ll t, n, k, l, q;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int>v;
		int sum = 0;
		int hai = 0;
		while (n--) {
			cin >> q;
			v.push_back(q);
			sum += q;
			if (q == 2) {
				hai = 1;
			}
		}

		if (sum % 2 == 0) {
			cout << 0 << "\n";
			continue;
		}

		if (hai == 1) {
			cout << 1 << "\n";
		} else {
			cout << -1 << "\n";
		}

	}
	return 0;

}