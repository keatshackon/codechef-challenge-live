#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, a, b, c, d;
	cin >> t;
	while (t--) {
		ll res = INT_MIN;
		cin >> n >> a;
		for (int i = 0; i <= n; i++) {
			if ((a - i)	 <= n and (a - i) >= 0) {
				if (abs((a - i) - i) > res) {
					res = abs((a - i) - i);
				}
			}
		}
		cout << res << "\n";
	}
	return 0;

}