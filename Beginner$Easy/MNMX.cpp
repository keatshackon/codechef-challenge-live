#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t,n,i,j,k,a=0;
	cin>>t;
	std::vector<int> v;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());

		int res = v[0];
		cout<<res*(v.size()-1)<<"\n";
		v.clear();

	}
	return 0;
}