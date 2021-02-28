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

int isprime(int n){

	for(int i=2;i*i<=n;i++){
		if(n%i == 0){
			return 0;
		}
	}
	return 1;
}



int main() {
    fast
    #ifdef _DEBUG
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    ll q,x,y,z,i,j,k,l,m,t,r,d,n;
    vector<ll> v(1000010,1);

    v[0] = 0; v[1] = 0;
    for(int i = 2;i < 1000010;i++){
    	if(isprime(i)){
    		j = i+i;
    		for(;j < 1000010;j+=i){
    			v[j] = 0;
    		}
    	}
	}
	
	cin>>t; 
	while(t--){
		cin>>n;
		int cnt = 0;
		for(int i=3;i<n-1;i++){
			if(v[i] && v[i+2]){
				cnt++;
			}
		}
		cout<<cnt<<"\n";
	}
	
	
    return 0;
}