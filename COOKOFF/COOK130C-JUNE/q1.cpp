#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {

	FAST

	ll t, a, b, c, d, e, f;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c >> d >> e >> f;

		if (b >= a and d >= c and f <= e) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}

	return 0;

}