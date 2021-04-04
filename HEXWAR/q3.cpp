#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, n, m, a, b, c;
	cin >> t;
	while (t--) {
		cin >> a >> b;

		if (a == b) {
			cout << a << "\n";
		} else if (a < b and  b % a == 0) {
			cout << a << "\n";
		} else if (a > b and a % b == 0) {
			cout << b << "\n";
		} else {
			while ((c = a % b) != 0) {
				a = b;
				b = c;
			}
			cout << b << "\n";
		}
	}
}