#include<bits/stdc++.h>
using namespace std;
#define ll long long

#define FAST ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int main() {

	FAST
	ll t, n, a, b, c, d;
	cin >> t;
	while (t--) {

		cin >> n;
		map<string, int> m;
		string s = "";
		n = n * 3;
		while (n--) {
			cin >> s >> a;
			if (m.count(s) == 0) {
				m[s] = a;
			} else {
				m[s] += a;
			}
		}

		vector<int>res;

		for (auto q : m) {
			res.push_back(q.second);
		}
		sort(res.begin(), res.end());

		for (auto q : res) {
			cout << q << " ";
		}

		cout << "\n";

	}

}