#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){

	ll t,q;
	cin>>t;
	std::map<int, int> map;
	while(t--){
		cin>>q;
		if(map.count(q) == 0){
			map[q]++;
		}else{
			map[q] = 1;
		}
	}

	int large = 0;
	for(auto q:map){
		if(q.second > large){
			large = q.second;
		}
	}

	cout<<large<<"\n";

}