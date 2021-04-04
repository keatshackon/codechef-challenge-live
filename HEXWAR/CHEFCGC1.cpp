#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(pair<int, pair<int, int>> a, pair<int, pair<int, int>> b) {
	if (b.second.second > a.second.second) {
		return true;
	}
	return false;
}

int main() {

	ll t, n, m, j, i, k;
	cin >> n;
	ll q = 0;
	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < n; i++) {
		cin >> q;
		v1.push_back(q);
	}

	for (int i = 0; i < n; i++) {
		cin >> q;
		v2.push_back(q);
	}

	vector<pair<int, pair<int, int>>> finish;
	vector<int> res;

	for (int i = 0; i < n; i++) {
		finish.push_back(make_pair(i + 1, make_pair(v1[i], v2[i])));
	}

	// std::vector<pair<int, int>> rel(finish.begin(), finish.end());

	sort(finish.begin(), finish.end(), cmp);

	// for (auto q : finish) {
	// 	cout << q.first << " : " << q.second.first << " " << q.second.second << "\n";
	// }
	// cout << "\n";

	int x = finish[0].second.first;
	int y = finish[0].second.second;

	res.push_back(finish[0].first);

	for (int i = 1; i < finish.size(); i++) {
		auto temp = finish[i];

		if (y <= temp.second.first) {
			y = temp.second.second;
			res.push_back(temp.first);
		}
	}

	// for (auto q : res) {
	// 	cout << q.first << " " << q.second << "\n";
	// }
	// cout << "\n";

	for (int i = 0; i < res.size() - 1 ; i++) {
		cout << res[i] << " " ;
	}

	cout << res[res.size() - 1];


}