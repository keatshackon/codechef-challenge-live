#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int prime(ll n){
	if(n==1){
		return 0;
	}
	if(n>2 && n%2==0){
		return 0;
	}
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;


}



int main()
{
	ll t,n,i,k,l;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(prime(n)){
			cout<<"yes"<<"\n";
		}else{
			cout<<"no"<<"\n";
		}
	}
}