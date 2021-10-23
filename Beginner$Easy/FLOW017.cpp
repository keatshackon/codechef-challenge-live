#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll a,b,c,t;
	cin>>t;
	while(t--){
		cin>>a>>b>>c;

		if(b>=a && b<=c || b<=a && b>=c){
			cout<<b<<"\n";
		}
		else if(a>=b && a<=c || a<=b && a>=c){
			cout<<a<<"\n";
		}
		else if(c>=a && c<=b || c<=a && c>=b){
			cout<<c<<"\n";
		}	
	}
	
	return 0;

}