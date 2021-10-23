#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll a, b, c, d, t;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c >> d;
		map<int, int>m;
		++m[a]; ++m[b]; ++m[c]; ++m[d];

		if (m.size() == 4) {
			cout << 2 << "\n";
		} else if (m.size() == 1) {
			cout << 0 << "\n";
		} else if (m.size() == 2) {
			auto q = m.begin();
			if (q->second == 1 or q->second == 3 ) {
				cout << 1 << "\n";
			} else {
				cout << 2 << "\n";
			}

		} else {
			cout << 2 << "\n";
		}


	}
	return 0;

}