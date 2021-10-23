#include<bits/stdc++.h>
using namespace std;
typedef long long ll;



int prime(int n){
	if(n==1){
		return 0;
	}if(n>2 && n%2==0){
		return 0;
	}
	for(int i=2;i*i<=n;i++){
		if(n%i == 0){
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
		
		for(int i=a;i<=b;i++){
			if(prime(i)){
				cout<<i<<"\n";
			}
		}
	}
	return 0;
}

