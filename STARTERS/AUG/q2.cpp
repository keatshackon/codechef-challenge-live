#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;

		cout << ((int)sqrt(n) * k) << "\n";
	}
	return 0;
}