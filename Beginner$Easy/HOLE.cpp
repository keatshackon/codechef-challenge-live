#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t,n,i,j,count=0;
	string s;
	cin>>t;
	while(t--){
		cin>>s;
		count = 0; 
		for(int i=0;i<s.size();i++)
		{
			if(s[i] == 'A' || s[i] == 'D' || s[i] == 'O' || s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' ){
				count++;
			}
			else if(s[i] == 'B'){
				count+=2;
			}

		}
		cout<<count<<"\n";

	}

}