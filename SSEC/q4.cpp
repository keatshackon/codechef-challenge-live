#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, k, l, c;
	cin >> t;
	while (t--) {
		cin >> n >> k;

		while ((c = n % k) != 0) {
			n = k;
			k = c;
		}
		cout << k << "\n";
	}
}