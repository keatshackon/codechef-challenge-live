#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, n, m, i, j;
	cin >> t ;

	while (t--) {

		cin >> n;

		if (n == 1) {
			cout << 20 << "\n";
		} else if (n == 2) {
			cout << 36 << "\n";
		} else if (n == 3) {
			cout << 51 << "\n";
		} else {
			cout << 63 << "\n";
		}
	}

	return 0;
}