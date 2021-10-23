#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int prime(int n){
	if(n == 1){
		return 0;
	}else if(n%2==0 && n>2){
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
	int t,n,a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		int c = a+b+1;
		while(c<20001){
			if(prime(c)){
				cout<<c-(a+b)<<"\n";
				break;
			}
			c++;
		} 
	}
} 