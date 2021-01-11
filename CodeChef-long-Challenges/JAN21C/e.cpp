#include<bits/stdc++.h>

using namespace std;

int maxConsecutiveOnes(int x);

int main(){

	cout<<maxConsecutiveOnes(14);
	return 0;

}


int maxConsecutiveOnes(int x)
{
 
    int cnt = 0;
    int res = 0;
    while(x){
        int k = x & 1;
        if(k == 1){
            cnt++;
        }else{
            
            cnt = 0;
        }
        if(cnt > res){
            res = cnt;
        }
        x = x>>1;
    	cout<<x<<" "<<res<<" " <<cnt<<"\n";
    }

    return res;
    
}