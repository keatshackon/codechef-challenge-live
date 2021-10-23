#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
	int t,n,i,j,k;
	cin>>t;
	while(t--){
		string j,s;
		cin>>j;
		cin>>s;
		map<char, int> map;
		for(int i=0;i<j.size();i++)
		{
			if(map.count(j[i]) == 0 ){
				map[j[i]] +=1;
			}
		}
		// for(auto q:map){
		// 	cout<<q.first<<" "<<q.second<<"\n";
		// }

		int cnt = 0;
		for(int i=0;i<s.size();i++){
			if(map.count(s[i])!=0){
				map[s[i]] -=1;
				cnt++;
			}
		}
		map.clear();
		cout<<cnt<<"\n";

	} 
}