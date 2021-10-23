/*                  #####################################
                    #           Nickname:keats          #
                    #           User:keats92            #
                    #####################################            
*/

#include <bits/stdc++.h> 
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define LL long long
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
    
    LL q,x,y,z,i,j,k,l,m,t,r,d,n,a,c;

	cin>>t;
	while(t--){
	   
	    cin>>c>>d>>l;
        a = c - d * 2;
        if(a < 0)
        	a = 0;
        if(l >= (4*(d+a)) && l <= 4 * (d+c) && l % 4 ==0)
        	cout<<"yes"<<endl;
        else
        cout<<"no"<<endl;
	}
	
	
    return 0;
}