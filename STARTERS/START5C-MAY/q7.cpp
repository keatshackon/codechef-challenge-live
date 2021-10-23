#include<bits/stdc++.h>
using namespace std;
#define ll long long

#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main() {

	FAST
	ll t, n, a, b, c, d;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c;

		ll temp = 2 * (180 + a);
		temp = temp - (b + c);
		cout << temp << "\n";
	}

}