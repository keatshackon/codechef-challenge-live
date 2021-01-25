/*                  #####################################
                    #           Nickname:keats          #
                    #           User:keats92            #
                    #####################################            
*/

#include <bits/stdc++.h> 
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define pb push_back
#define N 10001
#define lb lower_bound
#define M 100000000
#define ub upper_bound
#define mp make_pair
#define ld long double
#define f first
#define s second 

int main() {
    fast
    #ifdef _DEBUG
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    ll q,x,y,z,i,j,k,m,t,r,n;

	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    bool u = false,l = false,len = false,d = false,sp = false;
	    if(s.length()>=10){
	    	len = true;
	    }
	    for(int i=0;i<s.length();i++){
	    	if(s[i]>='a' and s[i]<='z'){
	    		l = true;
	    	}
	    	if(i != 0 and i != s.length()-1){
	    		if(s[i]>='A' and s[i]<='Z'){
	    			u = true;
	    		}else if(s[i]>='0' and s[i]<='9'){
	    			d = true;
	    		}else if(s[i]=='@' || s[i]=='#' || s[i]=='%' || s[i]=='&' || s[i]=='?'){
	    			sp = true;
	    		}	
	    	}
	    	
	    }
	    if(u && l && d  && len && sp ){
	    	
	    	cout<<"YES\n";
	    	
	    }else{
	    	
	    	cout<<"NO\n";
	    }

	}
    return 0;
}