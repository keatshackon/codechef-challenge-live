#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){


	ll t,i,k,q,n;
	cin>>t;
	while(t--){
		vector<ll> v;
		cin>>n;
		while(n--){
			cin>>q;
			v.push_back(q);
		}
		sort(v.begin(), v.end());
		int a = -1;
		int b = -1;
		int small = INT_MAX;
		for(int i=1;i<v.size();i++){
			if((v[i] - v[i-1]) < small){
				small = v[i] - v[i-1];
				a = v[i-1];
				b = v[i];
			}
		}
		
		cout<<a<<" "<<b<<"\n";
		
	}

	return 0;
}