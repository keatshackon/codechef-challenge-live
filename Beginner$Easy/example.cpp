#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t,n,l,r;
    ll result = 0;
    int f = 1;
    cin>>t;
    while(t--){
        cin>>l>>r;
        for(int i=l;i<=r;i++){
            ll q=i;
            while(q){
                ll re=q;
                ll sam=0;
                while(re){
                    sam = re%10;
                    if(sam ==2){
        
                    }else if( sam==5){
                        
                    }else{
                        f=0;
                        break;
                        
                    }
                    f=1;
                    re/=10;

                }
                if(f == 1){
                    result+=q;
                    // cout<<q<<" ";
                    break;
                }
                // cout<<q<<" ";
                q++;
            }
        }
        cout<<result;
    }
}