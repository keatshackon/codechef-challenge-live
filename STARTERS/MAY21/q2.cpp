#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t, n;
	string s;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<string> v;

		while (n--) {
			cin >> s;
			v.push_back(s);
		}
		int f = 1;

		for (auto q : v) {

			string temp = q;
			if (temp[0] >= 'a' and temp[0] <= 'm') {
				for (int i = 1; i < temp.length(); i++) {
					if (!(temp[i] >= 'a' and temp[i] <= 'm')) {
						f = 0;
						break;
					}
				}
			} else if (temp[0] >= 'N' and temp[0] <= 'Z') {
				for (int i = 1; i < temp.length(); i++) {
					if (!(temp[i] >= 'N' and temp[i] <= 'Z')) {
						f = 0;
						break;
					}
				}
			} else {
				f = 0;
			}
		}
		if (f == 0) {
			cout << "NO\n";
		} else {
			cout << "YES\n";
		}
	}

}