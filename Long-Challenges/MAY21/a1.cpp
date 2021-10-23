#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {


	vector<std::vector<int> > v = {

		{10 40 70},
		{20 50 80},
		{30 60 90}

	};

	int temp = INT_MIN;

	for (int i = 0; i < v.size(); i++) {
		if (temp < v[0][i]) {
			temp = v[i];
			idx = i;
		}
	}

	int res = temp;


	for (int i = 1; i < v.size(); i++) {
		int k = i;
		for (int j = 0; j < v[i].size(); j++) {
			if (temp < v[j]) {
				temp = v[j];
			}
		}
		res += temp;
	}
	return 0;

}