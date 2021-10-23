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
		vector<int> v;
		
		while(n--){
			cin>>q;
			v.push_back(q);
		}
		sort(v.begin(),v.end(),greater<int>());
		int i = 0;
		int f = 1;
		int w = 1;
		ll sum = 0;
		int cnt = 0;
		for(i = 0; i < v.size();i++){
			if(sum >= k){
				f = 0;                            
				break;
			}else{
				cnt++;
				sum += v[i];
			}
		}
		// cout<<cnt<<" "<<i<<"\/n";
		ll ss = sum;
		sum = v[i];
		ll te = 0;
		for(;i<v.size();i++){
			if(te <= k){
				te+=v[i];
				cnt++;
			}else{
				w = 0;
			}
		}
		
		if(f == 0 && te>=k || (ss + te) >= (2*k) || (f==0 && w==0)){
			cout<<(cnt)<<"\n";
		}else{
			cout<<-1<<"\n";
		}
	}
}
