#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, m, k, l, v, a, s;
	double v;
	cin >> t;
	while (t--) {

		cin >> u >> v >> a >> s;

		double res = sqrt((u * u) - (2 * a * s));

		if (res > v) {
			cout << "No\n";
		} else {
			cout << "YES\n";
		}
	}
	return 0;
}