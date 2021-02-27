#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){


	ll t,m,k;
	cin>>t;

	while(t--){

		string s;
		cin>>s;
		int cnt = 0;
		for(int i = 0 ;i < s.length();i++){
			if(s[i] == '#'){
				cnt++;
			}
		}

		cout<<cnt<<"\n";
	}
}