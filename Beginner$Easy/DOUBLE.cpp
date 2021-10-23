#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t,n,i,k;
	cin>>t;
	while(t--){
		cin>>n;
		if(n%2==0){
			cout<<n<<"\n";
		}
		else{
			cout<<n-1<<"\n";
		}
	}
} 