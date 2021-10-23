#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t,n,i,j,k,w;
	cin>>t;
	while(t--){
		std::vector<int> v;
		std::vector<int> res;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>w;
			v.push_back(w);	
		}
		int count = 0 ;
		for(int i=0;i<v.size();i++)
		{
			count = 0; 
			for(int j=i+1;j<v.size();j++)
			{
				if(v[i]<v[j]){
					count++;
				}
			}
			res.push_back(count);
		
		}

		for(auto q:res){
			cout<<q<<" ";
		}


	}
}
