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

	cin>>t;
	while(t--){
		cin>>n;
		ll  sum = 0;
		set<int>uni;
		for(int i = 1;i <= n;i++){
			cin>>q;
			sum+=q;
			uni.insert(q);
		}
		int a = n;
		n = (n * (n + 1)) / 2;

		if(sum >= n){
			cout<<"Second\n";
		}else{
		 	m = n - sum;
			if(m % 2 == 0){

				if(uni.size() >= (a-1)){
		 			cout<<"First\n";
		 		}else{
		 			cout<<"Second\n";
		 		}
			}else{
				cout<<"First\n";
			}
		}
	}
    return 0;
}