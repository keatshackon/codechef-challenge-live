#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t;
	float n = 0.0f;
	cin >> t >> n;

	float q = 0.0f;

	vector<float> v;

	while (t--) {
		cin >> q;
		v.push_back(q);
	}
	int cnt = 0;

	for (int i = v.size() - 1; i >= 0; i--) {

		while (true) {

			if (v[i] <= n) {
				n = (float) (n - v[i]);
				cnt++;
			} else {
				break;
			}
		}
		// cout << n << " " << cnt << "\n";
	}
	cout << cnt;
	return 0;
}