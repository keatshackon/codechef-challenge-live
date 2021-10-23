#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t,a,b,c=0;
	cin>>t;
	while(t--){
		cin>>a>>b;
		while((c=a%b) !=0){
			a=b;
			b=c;
		}
		cout<<b*2<<"\n";

	}
}