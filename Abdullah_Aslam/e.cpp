#include<bits/stdc++.h>
using namespace std;
#define LL long long


void occur(vector<LL> v,int t){

	
	int i = 0;
	int j = v.size()-1;
	int k = INT_MIN;
	while(i <= j){
		int m = (i+j)/2;
		if(v[m] == t){
			k = m;
			if( m !=0  && v[m-1] == v[m]){
				j = m - 1;
			}else{
				break;
			}
			
		}else if(v[m] > t){
			j = m - 1;
		}else{
			i = m + 1;
		}
	}
	if(k != INT_MIN){
		// cout<<"First Occrance of "<<t<< " is at "<<k;
	}
	i=k;
	int te = k;
	j = v.size()-1;
	while(i <= j){
		int m = (i+j)/2;
		if(v[m] == t){
			k = m;
			if(v[m+1] == v[m] && m!=v.size()-1){
				i = m + 1;
			}else{
				break;
			}
			
		}else if(v[m] > t){
			j = m - 1;
		}else{
			i = m + 1;
		}
	}
		cout<<te<<" " <<k;

}


int main(){
	LL i,j,k,n,t;
	vector<LL> v  = {2,3,6,7,7,8,8,8,12};
	cin>>t;
	occur(v,t);
	


}