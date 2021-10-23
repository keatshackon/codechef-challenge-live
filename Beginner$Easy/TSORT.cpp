#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t,n,i,j;
	std::vector<long long> v;
	cin>>t;
	while(t--){
		cin>>i;
		v.push_back(i);
	}
	sort(v.begin(),v.end());
	for(auto q:v){
		cout<<q<<"\n";
	}
}