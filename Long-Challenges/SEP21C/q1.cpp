#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, a, b, c, d, e;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c >> d >> e;

		if ((a + b) <= d and ( c <= e)) {
			cout << "YES\n";
		} else if ((b + c) <= d and (a <= e)) {
			cout << "YES\n";
		} else if ((a + c) <= d and (b <= e)) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
	return 0;

}