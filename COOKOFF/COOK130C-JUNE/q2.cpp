#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {

	FAST

	ll t, n, q;
	cin >> t;
	while (t--) {
		cin >> n;
		int cnt = 0;
		int res = 0;
		map<int, int> m;
		vector<int> v;
		while (n--) {
			cin >> q;
			v.push_back(q);
		}
		n = v.size();
		for (auto q : v) {

			if (q >= 1 and q <= 7) {
				if (m.count(q) == 0) {
					cnt++;
					m[q] = 1;
				}
			}
			if (cnt == 7) {
				res++;
				break;
			}
			res += 1;

		}

		cout << res << "\n";
	}

	return 0;

}