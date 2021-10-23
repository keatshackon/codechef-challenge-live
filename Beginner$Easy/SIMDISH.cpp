#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t,n,i,j,k;
	string a;
	cin>>t;
	
	while(t--){

		std::vector<string> v1;
		std::vector<string> v2;

		for(int i=0;i<4;i++)
		{
			cin>>a;
			v1.push_back(a);
		}
		for(int i=0;i<4;i++)
		{
			cin>>a;
			v2.push_back(a);
		}

		int cnt=0;
		for(int i=0;i<4;i++){
			for(int j=0;jcd <4;j++){
				if(v1[i] == v2[j]){
					cnt++;
				}
			}
		}
		if(cnt >= 2){
			cout<<"similar\n";
		}else{
			cout<<"dissimilar\n";
		}
	}
	return 0;
}