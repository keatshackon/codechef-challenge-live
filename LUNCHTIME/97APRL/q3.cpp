#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;

		if (s[0] == '<' and s[1] == '/' and s[s.length() - 1] == '>' and s.length() > 3) {
			int f = 1;

			for (int i = 2; i < s.length() - 1; i++) {
				if (!((s[i] >= 'a' and s[i] <= 'z') or (s[i] >= '1' and s[i] <= '9'))) {

					f = 0;
					break;
				}
			}
			if (f == 1) {
				cout << "Success\n";
			} else {
				cout << "Error\n";
			}
		} else {
			cout << "Error\n";
		}
	}
	return 0;

}