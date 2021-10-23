#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, a, b;
	cin >> t;
	while (t--) {
		cin >> n >> a >> b;
		string s;
		cin >> s;
		int res = 0;
		for (auto q : s) {
			if (q == '0') {
				res += a;
			} else {
				res += b;
			}
		}
		cout << res << "\n";
	}
	return 0;

}