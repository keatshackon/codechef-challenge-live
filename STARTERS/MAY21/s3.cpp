#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {


	ll t, n, a, b, c, q;
	cin >> t;
	while (t--) {

		cin >> a >> b >> c;
		ll temp ;
		map<int, int> m1;
		while (c--) {
			cin >> q;
			if (q <= a) {
				++m1[q];
			}

		}

		set<int>ss;

		int cnt = 0;
		for (auto q : m1) {
			if (q.second > 1) {
				ss.insert(q.first);
				cnt++;
			}

		}


		cout << cnt << " ";
		for (auto qq : ss) {
			cout << qq << " ";
		}
		cout << "\n";

	}
	return 0;
}