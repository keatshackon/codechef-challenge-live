#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int t, n, a, b, c;
	cin >> t;
	while (t--) {
		cin >> n >> a >> b >> c;
		int r1 = min(a, b);
		int temp = b - min(a, b);
		if (temp < 1 and r1 < n) {
			cout << "NO\n";
		} else if (r1 + min(temp, c) >= n) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}

	return 0;
}
