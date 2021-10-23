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

	//cin>>t;
    t = 153;
    q = t;

    int cnt = log10(t) + 1;
    int s = 0;

    // cout<<cnt<<"\n";

    while(t){
        cout<<t<<"\n";
        unsigned int r = t % 10;
        unsigned int  k = pow(r,cnt);
        cout<<r<<" "<<k<<"\n";
        s+=k;
        

        t/=10;
    }
	
    cout<<s<<"\n";

    if(s == q){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
	
	
    return 0;
}