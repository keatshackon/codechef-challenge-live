#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, m, k, l, q;
	cin >> t;
	while (t--) {

		vector<int> v = {0, 20, 36, 51};
		ll temp = 0;
		ll temp2 = 0;
		cin >> q;

		if (q < 4) {
			cout << v[q % 4] << "\n";
		} else {
			ll temp = ((q / 4) * (4 * 11));
			// cout << temp << "\n";
			temp += v[q % 4];
			temp2 = (4 - (q % 4));
			// cout << temp2 << "\n";
			temp2 *= 4;
			// cout << temp2 << "\n";
			temp += temp2;
			cout << temp << "\n";

		}
	}
}