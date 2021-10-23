#include<bits/stdc++.h>
using namespace std;
typedef long long ll ;

int main()
{
	int  t,n,i;
	cin>>t;
	while(t--){
		cin>>n;
		
		int res = 0;
		for(int i=11;i>=0;i--){
			res = res + (n/ceil(pow(2,i)));
			n = n % (int) ceil(pow(2,i));
		}
		cout<<res<<"\n";
	}
}