#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, a, b, c, d;
	cin >> t;
	while (t--) {
		cin >> n;
		if (n % 4 == 0) {
			cout << "North\n";
		} else if (n % 4 == 1) {
			cout << "East\n";
		} else if (n % 4 == 2) {
			cout << "South\n";
		} else {
			cout << "west\n";
		}
	}
	return 0;

}