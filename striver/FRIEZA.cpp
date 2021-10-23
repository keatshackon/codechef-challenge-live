#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		string cmp = "frieza";
		string res = "";
		int cnt = 0,cnt1 = 0;
		for(int i = 0;i < s.length();i++){

			int k =  cmp.find(s[i]);

			if(k != -1){
				if(cnt1 != 0){
					res+=to_string(cnt1);
					cnt1 = 0;
				}
				cnt++;
				
			
			}else{
				if(cnt != 0){
					res+=to_string(cnt);
					cnt = 0;
				}
				cnt1++;
				
			}
		}
		if(cnt != 0){
			res+=to_string(cnt);
		}else{
			res+=to_string(cnt1);
		}
		cout<<res<<"\n";
	}
	
}
