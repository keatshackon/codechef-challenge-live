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
#define LD long double
#define f first
#define se second 

int main() {
    fast
    #ifdef _DEBUG
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    ll q,x,y,z,i,j,k,l,m,t,r,d,n;

	cin>>t;
	while(t--){
        cin>>n;
        int t=1;
        for(int i=n;i>=1;i--){
            for(int j=n;j>=i;j--){
                cout<<i;
            }

            for(int k=1;k<=i-1;k++){
                cout<<(char)(t+64);
            }
            cout<<"\n";
            t++;
        }
	}
	
	
    return 0;
}