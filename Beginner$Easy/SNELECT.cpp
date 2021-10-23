#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	string s;
	cin>>t;
	while(t--){
 
		cin>>s;
		std::vector<char> v(s.begin(),s.end());
		
		for(int i=0;i<v.size()-1;i++){
			if(v[i] == 's' && v[i+1] == 'm'){
				v.erase(v.begin()+i);
			}else if(v[i] == 'm' && v[i+1] == 's'){
				v.erase(v.begin()+i+1);
			}
		}
		int mg = count(v.begin(),v.end(),'m');
		int sn = count(v.begin(),v.end(),'s');

		
		if(mg == sn){
			cout<<"tie\n";
		}else if(mg > sn){
			cout<<"mongooses\n";
		}else{
			cout<<"snakes\n";
		}
	}
}