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

	ll t,n,k,q;
	
	std::vector<ll> ;
	cin>>t;
	T{ 
	    cin>>n;
	    while(n--){
	        cin>>q;
	        v.push_back(q);
	        
	    }
	    ll sum = 0;
	    for(int i=1;i<v.size();i++){
	        sum+= (abs(v[i] - v[i-1])-1);
	    }
	    cout<<sum<<"\n";
	}
	
    return 0;
}