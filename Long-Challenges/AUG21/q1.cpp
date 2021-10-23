#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, a, b, c, d, e, f;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c >> d >> e >> f;

		if ((a + b + c) > (d + e + f)) cout << 1 << "\n";
		else cout << 2 << "\n";

	}

	return 0;

}