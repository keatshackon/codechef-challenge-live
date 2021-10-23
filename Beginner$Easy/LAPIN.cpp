#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t,n;
	cin>>t;
	while(t--){

		std::vector<int> v(26,0);
		string s;
		cin>>s;
		int j = s.size()/2-1;
		for(int i=0;i<=j;i++){
			v[s[i] -'a'] +=1;
		}
		s.size()%2==0?j+=1:j+=2;

		for(int i=j;i<s.size();i++){
			v[s[i] - 'a'] -=1;
		}
		int ans = 0; 
		for(auto q:v){
			if(q!=0){
				ans = 1;
			}
		}
		if(ans == 0){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}


	}
}