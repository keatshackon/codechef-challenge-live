#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t,n,a;
	cin>>t;

	cin>>n;
	int e=0,o=0;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a%2==0){
			e++;
		}else{
			o++;
		}
	}
	if(e>o){
		cout<<"READY FOR BATTLE";
	}else{
		cout<<"NOT READY";
	}
}
