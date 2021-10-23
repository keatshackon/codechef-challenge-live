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
	
    k = 1;
    i = 1;
    int cnt = 0;
    vector<ll> v;
    while(t>=k){
        k = (i * (i+1))/2;
        i++;
        cnt++;
    }
    

    cout<<cnt-1<<"\n";
    cnt-=2;
    
    for(int i=1;i<=cnt;i++){
        cout<<i<<" ";
    }
    cnt = cnt*(cnt+1)/2;
    cout<<t-cnt;

    

	
	
    return 0;
}