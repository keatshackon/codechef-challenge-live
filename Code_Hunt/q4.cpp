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
#define fi first
#define se second 

int cut(vector<int> v){

    int m = INT_MAX;

    for(auto q:v){
        if(q < m and q >=1){
            m = q;
        }
    }
    return m;
}


int main() {
    fast
    #ifdef _DEBUG
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    ll q,x,y,z,i,j,k,l,m,t,r,d,n;

	cin>>t;
    std::vector<int> v;
	while(t--){
        cin>>q;
        v.push_back(q);
	}

    while(true){
        int cnt = 0;
        int f = 0;
        int n = cut(v);
        for(int i = 0;i < v.size();i++){
            
            v[i] = v[i] - n;
            if(v[i] >= 0){
                cnt++;
            }
        }
        cout<<cnt<<"\n";

        // for(auto q:v){
        //     cout<<q<<" ";
        // }
        // cout<<"\n\n";

        for(int i = 0;i < v.size();i++){
            if(v[i] > 0  ){
                f = 1;
            }
        }

        if(f == 0){
            break;
        }
        
    }
    return 0;
}