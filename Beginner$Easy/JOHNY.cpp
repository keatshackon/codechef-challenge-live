#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t,n,i,j,k,a;
	cin>>t;
	while(t--){
		cin>>n;
		std::vector<int> v;
		for(int i=0;i<n;i++){
			cin>>a;
			v.push_back(a);
		}
		cin>>k;
		int res = v[k-1];
		sort(v.begin(),v.end());
		
		for(int i=0;i<n;i++){
			if(v[i]==res){
				cout<<i+1<<"\n";
			}
		}

	}
}