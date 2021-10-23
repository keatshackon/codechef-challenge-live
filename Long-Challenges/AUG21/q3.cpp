#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, a, b, c, d, n, k, p;
	cin >> t;
	while (t--) {

		cin >> n >> p >> k;

		ll ans = 0;
		ll q = p % k;
		q--;

		ll s = ((n - 1) / k) * k;
		s = n - 1 - s;

		if (q > s) {
			ans += (s + 1) * ((n - 1) / k + 1) + (q - s) * ((n - 1) / k);
		} else {
			ans += ((n - 1) / k + 1) * (q + 1);
		}

		for (int i = q + 1; i <= n - 1; i += k) {
			ans++;
			if (i == p) {
				cout << ans << "\n";
				break;
			}
		}

	}
	return 0;

}