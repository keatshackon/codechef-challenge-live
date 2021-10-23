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

        std::vector<int> v;
		for(int i=1;i<=10;i++){
            cin>>q;
            v.push_back(q);
        }
        cin>>k;

        m = 0;
        for(int i = v.size()-1;i>=0;i--){
            
            k = k - v[i];

            if(k >= 0){
                v[i] = 0;
                k = k - v[i];
            }
        }
        for(int i = v.size()-1;i >= 0;i--){
            if(v[i] > 0){
                m = i;
                break;
            }
        }

        cout<<m+1<<"\n";

	}
    return 0;
}