#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t,n,i,j,k,r,res=0;
	cin>>t;
	while(t--){
		cin>>n;
		res=0;
		while(n){
			r = n%10;
			res = res*10+ r;
			n/=10;
		}
		cout<<res<<"\n";
	}
	return 0;
}