#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, m , a, b, x, y, k, l;
	cin >> t;
	while (t--) {
		cin >> n >> m >> x >> y >> a >> b;

		int TS =  abs(n - x) + abs(m - y);


		// cout << "\n" << TS << "\n";

		int pS = abs(n - a) + abs(m - b) - min(abs(n - a), abs(m - b));


		// cout << "\n" << pS << " " << TS << "\n";

		// int f = 1;
		// int cnt = 0;
		// while (f == 1) {

		// 	if ((a + 1) <= n and (b + 1) <= m ) {
		// 		cnt++;
		// 		a = a + 1;
		// 		b = b + 1;
		// 	} else if (a + 1 <= n ) {
		// 		cnt++;
		// 		a += 1;
		// 	} else if (b + 1 <= m ) {
		// 		cnt++;
		// 		b += 1;
		// 	} else {
		// 		f = 0;
		// 	}
		// }

		// cout << "\n" << cnt << "\n";

		if (pS < TS) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
		}

	}
	return 0;
}