#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){
	ll t,n,m,q;

	cin>>t;
	while(t--){
		cin>>n;
		std::vector<ll> v;
		while(n--){
			cin>>q;
			v.push_back(q);
		}

		if(v[0] < v[v.size()-1]){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
}