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

        string s;
        cin>>s;

        std::map<char, int> map;

        for(int i=0;i<s.length();i++){
            if(map.count(s[i]) == 0){
                map[s[i]] = 1;
            }else{
                map[s[i]]++;
            }
        }

        int cnt1 = 0;
        int cnt2 = 0;
        for(auto q:map){
            cnt1 += q.second / 2;
            cnt2 += q.second % 2;
        }

            if(cnt1 >= cnt2){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }


    }
    return 0;
}