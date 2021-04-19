#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, k, q;
	cin >> t;
	while (t--) {
		cin >> n;
		set<int> v;
		while (n--) {
			cin >> q;
			v.insert(q);
		}

		if (v.size() % 2 == 0) {
			cout << "Aman\n";
		} else {
			cout << "Raju\n";
		}

	}

}