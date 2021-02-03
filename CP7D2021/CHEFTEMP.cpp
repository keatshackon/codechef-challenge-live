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
    std::vector<int> a;
    std::vector<int> b;

	t = 7;
    i = 0;
	while(i<7){
        cin>>q;
        a.push_back(q);
        i++;
	}
    i=0;
    while(i<7){
        cin>>q;
        b.push_back(q);
        i++;
    }
    int sum = 0;
    for(int i=0;i<7;i++){
        sum+=abs(a[i] - b[i]);
    }
    cout<<sum;
	
	
    return 0;
}