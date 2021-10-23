#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main() {

	ll t;
	cin >> t;

	while (t--) {
		string s;
		cin >> s;


		if (s[0]  == '9' or  s[0]  == '8' or s[0]  == '7' or s[0]  == '6' or s[0]  == '5' or s[0]  == '4' or s[0]  == '3' or s[0]  == '2' ) {
			cout << "1" + s << "\n";
		} else {
			cout << s[0] << "0" << s.substr(1) << "\n";
		}



	}

	return 0;

}