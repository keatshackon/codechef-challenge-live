#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {


	ll t;
	vector<int>v = {1, 3, 4, 5, 6,  6 , 7, 8, 9, 12};

	vector<int>s = {1 , 3, 5 , 6};

	//sort(v.begin(), v.end());


	auto k1 = *lower_bound(s.begin(), s.end(), 0);
	int  k = lower_bound(s.begin(), s.end(), 0) - s.begin();


	cout << k1 << "  " << k << "\n";


	return 0;


}