#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, j, q;
	cin >> t >> n;

	std::vector<int> v;
	while (t--) {
		cin >> q;
		v.push_back(q);
	}

	int res = 0;

	for (int i = 0; i < v.size() - 3; i++) {
		set<int>se;
		for (int k = i; k < i + n; k++) {
			se.insert(v[k]);
		}
		if (se.size() > res) {
			res = se.size();
		}
	}

	cout << res;
	return 0;
}