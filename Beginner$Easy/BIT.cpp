#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t,n,i,j,k;
	cin>>t;
	while(t--){
		int tc=0;
		cin>>n;
		for(int i=1;i<=n;i++){
			int q=i;
			while(q){
				q = q & (q-1);
				tc++;
			}
			
		}
		cout<<tc<<"\n";
	}
}