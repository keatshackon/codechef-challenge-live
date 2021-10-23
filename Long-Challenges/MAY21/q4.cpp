#include<bits/stdc++.h>
using namespace std;
#define ll long long


bool is_finished(vector<vector<int> > v) {



	if (v[0][0] == v[0][1] == v[0][2]) {
		return true;
	} else if (v[1][0] == v[1][1] == v[1][2]) {
		return true;
	} else if (v[2][0] == v[2][1] == v[2][2]) {
		return true;
	} else if (v[0][0] == v[1][0] == v[2][0]) {
		return true;
	} else if (v[0][1] == v[1][1] == v[2][1]) {
		return true;
	} else if (v[0][2] == v[1][2] == v[2][2]) {
		return true;
	} else if (v[0][0] == v[1][1] == v[2][2]) {
		return true;
	} else if (v[0][2] == v[1][1] == v[2][0]) {
		return true;
	}

	return false;

}



int main() {

	ll t, m, n, l;
	cin >> t;
}