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
    
    ll q,x,y,z,i,j,m,t,r,d,n;

	cin>>t;
	while(t--){
		string s;
        cin>>s;

        int on = 0;
        int off = 0;
        int k = -1;
        int l = -1;
        for(int i = 0;i < s.length();i++){

            if(s[i]  == '1' ){
                on = 1;
                k = i;
                break;
            }
        }

        for(int i =  s.length() - 1;i >= 0;i-- ){
            if(s[i]  == '1' ){
                l = i;
                break;
            }
        }

        // cout<<k<<" "<<l<<"\n";

        string res = "";
        int cnt = 0 ;

        if(on == 1){
            for(int i=k;i<=l;i++){
                if(s[i] == '1'){
                    res+='1';
                }else{
                    if(res != ""){
                        cnt++;
                        res = "";
                    }
                }
            }

            if(cnt == 0){
                cout<<1<<"\n";
            }else{
                cout<<cnt+1<<"\n";
            }    
        }else{
            cout<<0<<"\n";
        }
	}
    return 0;
}