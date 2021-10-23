/*                  #####################################
                    #           Nickname:Mr.Keats       #
                    #           User:keats92            #
                    #####################################            
*/

#include <bits/stdc++.h> 
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define PB push_back
#define N 10001
#define LB lower_bound
#define M 100000000
#define UB upper_bound
#define MP make_pair
#define LD long double
#define F first
#define SE second 

int main() {
    fast
    #ifdef _DEBUG
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    ll q,x,y,z,i,j,k,l,m,t,r,d,n,a,b,c;
    ll left = 0;

	cin>>t>>n>>left;

    ll large = 0;

    while(t--){
        cin>>q;
        if(q > large){
            large = q;
        }
    }

    if(large + left >= n){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }
	
    return 0;
}