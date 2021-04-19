#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, n, q, x;
	cin >> t;
	while (t--) {
		cin >> n >> x;

		std::map<int, int> m;
		while (n--) {
			cin >> q;
			if (m.count(q) == 0) {
				++m[q];
			} else {
				x--;
			}
		}

		if ( x > 0) {
			cout << m.size() - x << "\n";
		} else {
			cout << m.size() << "\n";
		}
	}
}