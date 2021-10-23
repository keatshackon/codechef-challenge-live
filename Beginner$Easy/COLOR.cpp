#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main() {
    
    ll t,n;
    string s;
    cin>>t; 
    map<char,int>color;
    while(t--){
        cin>>n;
        cin>>s;
        // cout<<s<<"\n";
        for(int i=0;i<s.size();i++){
            color[s[i]]+=1;
        }
        int a,b,c;
        a=color['R'];
        b=color['B'];
        c=color['G'];
        int res=max(c,max(a,b));
        
        cout<<n-res<<"\n";
        color.clear();
        
    }
       
        
	return 0;
}