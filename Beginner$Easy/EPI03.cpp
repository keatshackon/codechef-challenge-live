#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	string s;
	int res=0;
	cin>>s;
	char c;
	cin>>c;
	for(int i=0;i<s.size();i++){
		if(s[i] == c){
			res++;
		}
	}
	cout<<res;
}