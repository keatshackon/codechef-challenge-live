#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, x, k;
	cin >> t;
	while (t--) {

		cin >> n >> x >> k;

		int b = (n + 1) % k;

		if (x % k == 0 || x % k == b) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;

}
