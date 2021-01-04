#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef unsigned long long ull;
typedef long long ll;

int main(){
	fast

	ll t,n,k,q;
	cin>>t;
	while(t--){
		cin>>n;
		string s,res = "";
		cin>>s;
		ll i = 0;
		while(n){
			string st = s.substr(i,i+4);
			bitset<4> bits(st);
    		int ab = bits.to_ulong();
    		char c = 'a' + ab;
    		res+=c;
    		n-=4;
    		i = i+4;
		}
		cout<<res<<"\n";
	}


}