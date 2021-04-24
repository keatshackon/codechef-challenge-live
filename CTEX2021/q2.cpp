
#include<bits/stdc++.h>
using namespace std;
#define ll long long


int prime(int n) {


	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {

	ll n;
	cin >> n;

	int res = 0;
	ll i = 0;
	ll k = 2;
	while (i <= n) {
		if (prime(k)) {
			i++;
			res += k;
			if (i == n) {
				break;
			}
		}
		k++;
	}
	cout << res;

}