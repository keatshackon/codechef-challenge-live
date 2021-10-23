#include<bits/stdc++.h>
using namespace std;
#define ll long long


int fun(int *price, int n) {


	if (n < 2) {
		return 0;
	}


	int last = v[n - 1];

	int max = 0;


	for (int i = n - 2; i >= 0; i--) {
		if (a[i] > a[i - 1]) {
			max += last - v[i];
			last = v[i];
		}
	}

	return max;

}

int main() {


	int price[5] = {2, 30, 15, 10, 8, 25, 80};

	cout << fun(price, 7);

	return 0;

}