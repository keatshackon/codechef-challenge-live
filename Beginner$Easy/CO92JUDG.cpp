#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	ll t,n,i,j,k;
	ll h1 = 0 ,h2 = 0,sum1 = 0,sum2 = 0;
	cin>>t;
	while(t--){
		cin>>n;
		h1 = 0 ,h2 = 0,sum1 = 0,sum2 = 0;
		for(int i=0;i<n;i++)
		{
			cin>>j;
			if(j>h1){
				h1=j;
			}
			sum1+=j;
		}


		for(int i=0;i<n;i++)
		{
			cin>>k;
			if(k>h2){
				h2 = k;
			}
			sum2+=k;	
		}

		printf("%d\n",sum2);
		if((sum1-h1) == (sum2-h2)){
			cout<<"Draw"<<"\n";
		}
		else if(sum1-h1 > sum2-h2){
			cout<<"Bob"<<"\n";
		}else{
			cout<<"Alice"<<"\n";
		}
	}
}