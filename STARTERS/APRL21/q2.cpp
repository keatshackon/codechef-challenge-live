#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, t1, t2, n, m;
	string q;
	cin >> t;
	while (t--) {
		cin >> n >> m >> t1 >> t2;
		vector<string> v;
		while (n--) {
			cin >> q;
			v.push_back(q);
		}
		string res = "";

		for (auto q : v) {
			int x = 0;
			int y = 0;
			string temp = q;
			for (int i = 0; i < temp.length(); i++) {
				if (temp[i] == 'F') {
					x++;
				} else if (temp[i] == 'P') {
					y++;
				}
			}
			if (x >= t1) {
				res += '1';
			} else if (t1 == (x + 1) and y >= t2) {
				res += '1';
			} else {
				res += '0';
			}
		}

		cout << res << "\n";
	}
	return 0;

}