#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {

	ll t, n, k, l;
	int lin = 0;

	vector<string> res;
	string s;
	int ch = 0;
	while (getline(cin, s)) {

		if (s == "") {
			break;
		}
		lin++;
		int i = 0;
		string temp;
		while (i < s.length()) {
			if (i + 1 < s.length() and s[i] == '\\'  and s[i + 1] == 'n') {
				if (temp != "") {
					res.push_back(temp);
					temp = "";
				}
				i++;
				ch++;
			} else {
				temp += s[i];
			}

			i++;

		}
		if (temp != "") {
			res.push_back(temp);
		}
		temp = "";
	}
	cout << ch << "\n" << lin << "\n";
	for (auto q : res) {
		cout << q << "\n";
	}
	return 0;
}
