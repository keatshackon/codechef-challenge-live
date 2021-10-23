#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t,n,i,j,k,a,b;
	
	cin>>a>>b;
	int per = 2*(a+b);
	int are = a*b;
	if(per > are){
		cout<<"Peri"<<"\n"<<per<<"\n";
	}else if(per < are){
		cout<<"Area"<<"\n"<<are<<"\n";
	}else{
		cout<<"Eq"<<"\n"<<per<<"\n";
	}

}