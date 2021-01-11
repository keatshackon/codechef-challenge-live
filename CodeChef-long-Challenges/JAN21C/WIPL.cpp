/*                  #####################################
                    #           Nickname:Mr. Keats      #     #
                    #           User:keats92            #
                    #####################################            
*/
#include<bits/stdc++.h>
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef unsigned long long ull;
typedef long long ll;
using namespace std;

int main()
{
	fast;
	ll t,n,k,q;
	cin>>t;
	while(t--){
		cin>>n>>k;
		vector<ll> v;
		ll sum = 0;
		while(n--){
			cin>>q;
			v.push_back(q);
		}
		sort(v.begin(),v.end());
		ll i = v.size()-1;
		ll k1 = k;
		while(i > = 0){
			if(k > 0 ){
				k = k - v[i]
			}else{
				i++;
				break;
			}
			i-=2;
		}
		if(k!=0){
			cout<<-1<<"\n";
		}else{
			ll i = v.size()-2;
			while(i > 0){
			if(k1 > 0){
					k1 = k1 - v[i];
				}
			}	
		}

	}
}
