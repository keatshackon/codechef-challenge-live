#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
	ll t,n,i,j,k,gcd,lcm,c;
	cin>>t;
	while(t--){
		cin>>i>>j;
		ll a=i;ll b=j;
		while((c=i%j)!=0){
			i=j;
			j=c;
		}
		cout<<j<<" "<<((a*b)/j)<<"\n";
	}
	return 0;
}
