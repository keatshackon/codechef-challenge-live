#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, k, l, q;
	cin >> t >> k;
	vector<int>v;
	unordered_map<int, int>m;
	while (t--) {
		cin >> q;
		v.push_back(q);
		++m[q];
	}

	sort(v.begin(), v.end());

	while (k--) {
		cin >> q;
		if (m.count(q) != 0) {
			cout << "0\n";
			continue;
		}

		int temp = lower_bound(v.begin(), v.end(), q) - v.begin();

		if (temp % 2 == 0) {
			cout << "POSITIVE\n";
		} else {
			cout << "NEGATIVE\n";
		}
	}
	return 0;
}