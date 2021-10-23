#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t,n,i,j,k;
	std::vector<int> v;
	cin>>t;
	while(t--){
		cin>>n;
		v.push_back(n);
	}
	sort(v.begin(),v.end());

	for(auto q:v){
		cout<<q<<"\n";
	}
}