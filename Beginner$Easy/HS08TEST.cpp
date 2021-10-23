#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

	ll t,n,i,j;
	float amt;
	cin>>n>>amt;
	float net = n + 0.5f;
	if(n%5 == 0 && net <= amt){
		cout<<fixed<<std::setprecision(2)<<(amt-net);
	}else{
		cout<<fixed<<std::setprecision(2)<<amt;
	}
	
	return 0;
}