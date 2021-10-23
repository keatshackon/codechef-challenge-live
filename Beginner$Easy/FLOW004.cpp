#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t,n,i,j;
	cin>>t;
	while(t--){

		cin>>n;
		i=n%10;

		while(n>=10){
			n=n/10;
		}
		cout<<(n+i)<<"\n";
	}
}