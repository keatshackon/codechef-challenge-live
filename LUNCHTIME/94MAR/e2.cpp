#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ios_base::sync_with_stdio(false), cin.tie(nullptr);

	ll t, n, k, l = 1;
	string s;
	cin >> t;
	while (t--) {
		cin >> n >> s;
		int cnt = 1;
		cout << "Case #" << l << ": " ;
		vector<int>v;
		for (int i = s.length() - 1; i >= 0 ; i--) {
			cnt = 1;
			int j = i;
			while (j - 1 >= 0 and s[j] > s[j - 1]) {
				cnt++;
				j--;
			}

			v.push_back(cnt);

		}

		for (int i = v.size() - 1; i >= 0; i--) {
			cout << v[i] << " ";
		}
		cout << "\n";
		l++;
	}
	return 0;

}