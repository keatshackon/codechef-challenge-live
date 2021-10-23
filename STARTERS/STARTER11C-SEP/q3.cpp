#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int unsigned long long
int32_t main() {

	ll t, n, a, b, c, s;
	cin >> t;
	while (t--) {
		int n, s;
		cin >> n >> s;
		int ans = n * (n + 1) / 2;
		ans = ans - s;
		if (ans >= 1 and  ans <= n)  cout << ans << "\n";
		else cout << -1 << "\n";
	}
	return 0;
}