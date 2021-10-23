/*                  #####################################
                    #           Can call me:keats       #
                    #           Authour:Suraj           #
                    #####################################            
*/

#include <bits/stdc++.h> 
using namespace std;
#define T while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef unsigned long long ull;
typedef long long ll;


int main() {
    fast
    #ifdef _DEBUG
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

	ll t,n,k;
	cin>>t;
	T{ 
	    ll f=1;
	    cin>>n;
	    for(int i=1;i<=n;i++)
	    {
	        f=f*i;
	    }
	    cout<<f<<"\n";
	    
	}
	
	
    return 0;
}