#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t,n,i,j,k,r;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=n+1;i<n+1500;i++){
			int cnt = 0;
			int q=i;
			while(q){
				r = q%10;
				if(r == 3){
					cnt++;
				}
				q/=10;

			}
			if(cnt ==3){
				cout<<i<<"\n";
				break;
			}
		}
	}
}