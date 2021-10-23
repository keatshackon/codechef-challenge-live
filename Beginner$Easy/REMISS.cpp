#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t,n;
	cin>>t>>n;
	if(t<=n){
		cout<<n<<" ";
		cout<<n+t;
	}else{
		cout<<t<<" ";
		cout<<t+n<<"\n";
	}



}