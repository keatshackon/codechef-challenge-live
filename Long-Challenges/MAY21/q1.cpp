#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, a, b, c;
	cin >> t;
	while (t--) {
		cin >> a >> b >> c;

		float res = b + ((100.0f - a) * c);
		cout << res * 10 << "\n";
	}
}