#include<bits/stdc++.h>
using namespace std;
#define ll long long

#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main() {

	FAST
	ll t, n, a, b, c, d;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c >> d;

		if ((a + c == 180) and (b + d == 180)) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}

}