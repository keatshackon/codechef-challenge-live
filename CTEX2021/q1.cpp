#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll n, q, t;
	cin >> n >> q;

	int f = 0;
	t = 1;
	while (t <= q) {

		if (((n * t) % q) == 1) {
			cout << t;
			f = 1;
			break;
		}
		t++;
	}

	if (f == 0)
		cout << "None";

	return 0;

}