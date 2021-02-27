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
    
    ll q,x,y,z,i,j,k,l,m,t,r,d,n,a,b,c;

    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        k = min(a,b);
        int f = 0;
        for(int i = 1;i <= k;i++){
            if(a-i == c and b-i == d){
                f = 1;
                break;
            }
            if(a-i == c and a-i >= c and b == d){
                f = 1;
                break;
            }
            if(b-i == d  and b-i >= d and a == c){
                f = 1;
                break; 
            }
        }
        if(f == 0){
            cout<<"NO\n";
        }else{
            cout<<"YES\n";
        }
    }
    
    
    return 0;
}