#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

int main()
{
	ll t,n;
	cin>>t;
	while(t--){
		cin>>n;
	    if(n==1){
	        cout<<1<<"\n";
	    }else{
	        int s=n;
		for(int i=1;i<=s;i++)
		{
			n = n-i;
			if(n < 0){
				cout<<i-1<<"\n";
				break;
			}
		}
	    }
		
	}

}