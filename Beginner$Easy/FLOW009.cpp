#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t,n,j;
	float k;
	cin>>t;
	while(t--){
		cin>>j>>k;
		if(j>1000){
			float dis = (float)k*j/10;
			cout<<(k*j-dis);

		}else{
			cout<<(float)(k*j)<<"\n";
		}

	}
}