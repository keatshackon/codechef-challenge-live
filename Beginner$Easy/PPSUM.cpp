#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t,n,a,b,c;
	cin>>t;
	while(t--){
		cin>>a>>b;
		int s1=0;
		for(int i=1;i<=a;i++){
			s1 =  b*(b+1)/2;
			b=s1;
		}
		cout<<b<<"\n";
	}
}