#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(pair<int, int>a, pair<int, int>b) {

	if (a.second > b.second) {
		return true;
	}
	return false;
}


int main() {

	ll t, n, l, k, a, b;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		vector<pair<int, int>>v;
		while (n--) {
			cin >> a >> b;
			v.push_back({a, b});
		}
		sort(v.begin(), v.end(), cmp);

		// for (auto q : v) {
		// 	cout << q.first << " " << q.second << "\n";
		// }
		int res = 0;
		for (auto q : v) {
			if (q.first <= k) {
				res = q.second;
				break;
			}

		}
		cout << res << "\n";
	}

}