/*                  #####################################
                    #           Nickname:keats          #
                    #           User:keats92            #
                    #####################################            
*/

#include <bits/stdc++.h> 
using namespace std;
#define T while(t--)
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
typedef unsigned long long ull;
typedef long long ll;


int main() {
    fast
    #ifdef _DEBUG
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

	ll t,n,k,q;
	cin>>t;
	while(t--){
	    ll sum1 = 0,sum2 = 0;
        cin>>n>>k;
        
        vector<int> v1;
        vector<int> v2;
        
        while(n--){
            cin>>q;
            sum1 += q;
            v1.push_back(q);
        }
        while(k--){
            cin>>q;
            sum2 += q;
            v2.push_back(q);   
        }
        if(sum1 > sum2){
            cout<<0<<"\n";
        }else{
            sort(v1.begin(), v1.end());
            sort(v2.begin(), v2.end(),greater<int>());

            // for(auto q:v1){
            //     cout<<q<<" ";
            // }
            // cout<<"\n";
            // for(auto q:v2){
            //     cout<<q<<" ";
            // }
            
            ll a = 0,b = v1.size(),d = v2.size();
            ll f = 0;
            ll cnt = 0;
            while(a < b && a < d){
                if(sum1  > sum2){
                    f = 1;
                    break;
                }else{
                    cnt++;
                    sum1 =  (sum1 - v1[a]) + v2[a];
                    sum2 =  (sum2 - v2[a])  + v1[a];
                }
                a++;
            }
            // cout<<sum1<<" "<<sum2<<" "<<cnt<<"\n";
            if( sum1 > sum2){
                cout<<cnt<<"\n";
            }else{
                cout<<-1<<"\n";
            }

        }
    }
        
        
    return 0;
}