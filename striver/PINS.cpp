/*                  #####################################
                    #           Nickname:keats          #
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
#define S second 

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
        m = (n/2);
        string s1;
        while(m){
            s1 += "0";
            m--;
        }
        string s = "1" + s1; 
        cout<<1<<" "<<s<<"\n";
    }
    
    
    return 0;
}