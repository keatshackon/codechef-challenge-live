#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, n;
	cin >> t;
	while (t--) {
		float x, y, a, b, D;
		cin >> x >> y >> a >> b >> D;

		float check = min((x / a) , (y / b));
		if ( check >= D) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}

	}
	return 0;
}