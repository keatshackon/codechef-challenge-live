#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	ll t, n, k, l = 1;
	string s;
	cin >> t;
	while (t--) {
		cin >> n >> k;

		cin >> s;

		if (s.length() == 1 and ) {

		}

		int occ = 0;
		int i = 0;
		int j = s.length() - 1;
		while (i < j) {
			if (s[i] != s[j]) {
				occ++;
			}
			i++;
			j--;
		}
		if (occ >= k) {
			cout << "Case #" << l << ": " << 0 << "\n";
		} else {
			cout << "Case #" << l << ": " << (k - occ) << "\n";
		}
		l++;
	}



	return 0;


}