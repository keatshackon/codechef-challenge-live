#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007


int main() {

	ll t, m, n, l;
	cin >> t;

	while (t--) {
		cin >> n;
		ll  cnt = 0;
		ll  res = 0;
		int m = (int) pow(2, n);
		for (int i = 0; i < m; i++) {
			if (!((i ^ (i + 1)) ^ ((i + 2) ^ (i + 3)))) {
				cnt++;
				res  = cnt % M;
			}
		}
		cout << res << endl;
	}
	return 0;
}