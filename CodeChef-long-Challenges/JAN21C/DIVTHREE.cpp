/*                  #####################################
                    #           Nickname:keats          #
                    #           User:keats92            #
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

	ll t,n,k,q,d;
	cin>>t;
	T{ 
	    cin>>n>>k>>d;
	   // vector<ll> v;
	    ll sum = 0; 
	    while(n--){
	        cin>>q;
	        sum += q;
	    }
	    ll temp = sum/k;
	    if(temp > d){
	        cout<<d<<"\n";
	    }else{
	        cout<<temp<<"\n";
	    }
	}
	
    return 0;
}