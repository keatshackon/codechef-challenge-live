#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	ll t, n, a, k;
	cin >> t;
	while (t--) {
		cin >> n >> k >> a;
		if (n >= k and n <= a) {
			cout << "Take second dose now\n";
		} else if (n > a) {
			cout << "Too Late\n";
		} else {
			cout << "Too Early\n";
		}

	}
	return 0;
}

