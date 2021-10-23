#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
	int t,n,i,j,k,a;
	std::map<int, int> map;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a;
			if(map.count(a)==0){
				map[a]+=1;
			}else{
				map[a]+=1;
			}

		}
		int max = 0;
		int val = 0;

		for(auto q:map){
			if(q.second>max){
				max = q.second;
				val = q.first;
			} 
		}
		cout<<val<<" "<<max<<"\n";
		map.clear();


	}
}