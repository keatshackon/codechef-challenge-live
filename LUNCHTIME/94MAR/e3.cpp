#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, k, l = 1, q;
	cin >> t;
	while (t--) {
		vector<vector<int>>v;

		for (int i = 0; i < 3; i++) {
			vector<int>temp;
			for (int j = 0; j < 3; j++) {
				cin >> q;
				if (i == 1 and j == 1) {
					temp.push_back(-1);
					j++;
				}
				temp.push_back(q);
			}
			v.push_back(temp);

		}



		int cnt = 0;

		if (((v[0][0] + v[0][2])) == 2 * v[0][1]) {
			cnt++;
		}

		if (((v[0][0] + v[2][0])) == 2 * v[1][0]) {
			cnt++;
		}
		if (((v[2][0] + v[2][2])) == 2 * v[2][1]) {
			cnt++;
		}
		if (((v[0][2] + v[2][2])) == 2 * v[1][2]) {
			cnt++;
		}

		std::map<int, int> m;

		int t = (v[0][0] + v[2][2]) / 2;
		++m[t];

		t = (v[0][2] + v[2][0]) / 2;
		++m[t];

		t = (v[0][1] + v[2][1]) / 2;
		++m[t];

		t = (v[1][0] + v[1][2]) / 2;
		++m[t];

		int tmp = 0;
		for (auto q : m) {
			// cout << "\n" << q.first << " " << q.second << "\n";
			if (q.second > tmp ) {
				tmp = q.second;
			}
		}

		cout << "Case #" << l << ": " << (tmp + cnt) << "\n";
		l++;
	}
	return 0;

}