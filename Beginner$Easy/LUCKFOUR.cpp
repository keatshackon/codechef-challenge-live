#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t,n,res,count = 0;
	cin>>t;
	while(t--){
		cin>>n;
		count = 0; 
		while(n){
			res = n%10;
			if(res == 4 ){
				count++;
			}
			n=n/10;
		}
		cout<<count<<"\n";
	}
	return 0;
}