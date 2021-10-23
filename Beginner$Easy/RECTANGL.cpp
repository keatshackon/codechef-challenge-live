#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t,n,a,b,c,d;
	cin>>t;
	while(t--){
		cin>>a>>b>>c>>d;
		if(a==c && b==d || a==b && c==d || a==d && b==c){
			cout<<"YES"<<"\n";
		}else{
			cout<<"NO"<<"\n";
		}

	}
}