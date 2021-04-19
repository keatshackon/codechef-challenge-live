#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, a, b, c, e, d, f, g;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c >> d >> e >> f >> g;

		if (a <= e and b <= f and c <= g  and (e + f + g) >= d) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}