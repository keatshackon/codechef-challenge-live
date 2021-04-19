#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, n, k, l;
	cin >> t;
	vector<int> v;
	while (t--) {
		cin >> n;
		v.push_back(n);
	}
	cin >> k;

	l = 0;
	while (l < v.size()) {
		ll temp = l + k - 1;
		ll tt = l;

		if (! (temp < v.size())) {
			break;
		}

		while (tt < temp) {
			swap(v[tt], v[temp]);
			tt++;
			temp--;
		}
		l += k;
	}

	for (auto q : v) {
		cout << q << " ";
	}

	return 0;

}