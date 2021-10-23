#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, m, a, v, s;
	float u;
	cin >> t;
	while (t--) {
		cin >> u;
		cin >> v >> a >> s;

		float temp = sqrt((u * u) - (2 * a * s));

		if (temp > u) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
		}

	}
	return 0;

}