// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main() {

// 	ll t, n, k, q;
// 	cin >> t;
// 	while (t--) {
// 		cin >> n >> k;
// 		ll res = 0;
// 		ll kk = n;
// 		vector<int> v1;
// 		vector<int> v2;
// 		while (n--) {
// 			cin >> q;
// 			v1.push_back(q);
// 		}

// 		while (kk--) {
// 			cin >> q;
// 			v2.push_back(q);
// 		}
// 		res = 0;
// 		ll temp = 0;
// 		for (int i = 0; i < v2.size(); i++) {
// 			res += v2[i];
// 		}

// 		for (int i = 1; i < v1.size(); i++) {
// 			temp += abs(v1[i] - v1[i - 1]);
// 		}
// 		temp *= k;
// 		cout << res - temp << "\n";
// 		// cout << res << "\n";
// 	}
// 	return 0;
// }




#include <bits/stdc++.h>
using namespace std;
#define int long long int
signed main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, r;
		cin >> n >> r;
		int a[n], b[n];
		for (int i = 0; i < n; i++) cin >> a[i];

		for (int i = 0; i < n; i++) cin >> b[i];

		int sum = b[0], max_res = sum;
		for (int i = 1; i < n; i++)
		{
			int k = a[i] - a[i - 1];
			sum = sum - r * k;
			if (sum < 0)
				sum = 0;

			sum += b[i];
			if (max_res < sum)
				max_res = sum;

		}
		cout << max_res << endl;

	}

	return 0;
}