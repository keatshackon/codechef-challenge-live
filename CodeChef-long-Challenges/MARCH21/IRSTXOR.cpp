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
    
    int q,x,y,z,i,j,k,l,m,t,r,d,n,a,b,c;

	cin>>t;
	while(t--){
       cin>>n;

       l =  log2(n) + 1;
       l = (ll)pow(2,l) - 1;

       ll lb  = l/2;
       ll ub = lb ^ n;

       ll p = lb*ub;

       cout<<p<<"\n";

	}
    return 0;
}