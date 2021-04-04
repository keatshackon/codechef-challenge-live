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
    ll ch = 0,eg = 0;
	cin>>t;
	while(t--){
	    cin>>n>>eg>>ch>>a>>b>>c;

        ll price = 0;
        x  = m/2;
        int item = 0;
        if(a <= x){
            m = m - 2 * x;
            item += x;
            price = price + a*x;
        }
        y = n/3;
        if(b <= y){
            n = n - y*3;
            item += y;
            price = price + b * y;
        }

        if(m >= c and n>= c){
            item+=c;
        }

        if(item >= l){
            cout<<
        }else{
            cout<<-1<<"\n";
        }

	}
    return 0;
}