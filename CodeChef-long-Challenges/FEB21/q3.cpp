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

	cin>>t;
	while(t--){
	    string s;
        cin>>s;
        cin>>n; 
        string res = "";
        while(n--){
            string s1,s2;
            cin>>s1>>s2;

            if(s[s.length()-2] == 'A'){
                
                string t1(2, s[0]);
                t1+=s[1];
                
                string t2(2, s1[0]);
                t2+=s1[1];
                int temp1 = stoi(t1);
                int temp2 = stoi(t2);
                if(temp1 <= temp2){
                    res+='1';
                }else{
                    res+='0';
                }
            }else{
                string t1(2, s[0]);
                t1+=s[1];
                
                string t2(2, s1[0]);
                t2+=s1[1];
                int temp1 = stoi(t1);
                int temp2 = stoi(t2);
                if(temp1 <= temp2){
                    res+='1';
                }else{
                    res+='0';
                }
            }


        }
        cout<<res;
        res="";


	}
	
	
    return 0;
}