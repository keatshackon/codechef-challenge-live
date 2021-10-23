#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t,n,i,h,j,k;
	cin>>t;
	if(t<10){
		cout<<"1"<<"\n";
	}else if(t<100 && t>=10){
		cout<<"2"<<"\n";
	}else if(t<1000){
		cout<<"3"<<"\n";
	}else{
		cout<<"More than 3 digits"<<"\n";
	}
	return 0;
}