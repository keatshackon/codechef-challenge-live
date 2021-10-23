#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, q, n;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int>v;
		while (n--) {
			cin >> q;
			v.push_back(q);
		}

		vector<int>ans(v.size());
		int i = 0;
		int b = v.size() - 1;

		for (auto q : v) {
			if (q % 2 == 0) {
				ans[i] = q;
				i++;
			} else {
				ans[b] = q;
				b--;
			}
		}


		for (auto q : ans) {
			cout << q << " ";
		}

		cout << "\n";
	}

}