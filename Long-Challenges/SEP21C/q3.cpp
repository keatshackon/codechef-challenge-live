#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, m, a, b, c, q;
	cin >> t;
	while (t--) {
		cin >> n;
		int od = 0;
		int ev = 0;
		if (n % 2 == 0) {
			int res = 0;
			int s1 = n / 2;
			int s2 = n / 2;
			while (n--) {
				cin >> q;
				if (q % 2 == 0) {
					ev++;
				} else {
					od++;
				}
			}
			if (ev <= s1) {
				res += ev;
			} else {
				res += (s2 % ev);
			}
			if (od <= s2) {
				res += od;
			} else {
				res += (s1 % od);
			}
			cout << res << "\n";


		} else {
			int res = 0;
			int s1 = (n / 2) + 1;
			int s2 = n / 2;
			while (n--) {
				cin >> q;
				if (q % 2 == 0) {
					ev++;
				} else {
					od++;
				}
			}
			if (ev <= s1) {
				res += ev;
			} else {
				res += (s1 % ev);
			}
			if (od <= s2) {
				res += od;
			} else {
				res += (s2 % od);
			}
			cout << res << "\n";

		}

	}

}