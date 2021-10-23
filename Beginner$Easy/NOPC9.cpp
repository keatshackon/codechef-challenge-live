#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	string s;
	cin>>s;
	std::map<char, int> map;

	for(int i=0;i<s.size();i++)
    {
        map[s[i]]+=1;
    }
    for(auto q:map){
    	cout<<q.first<<" "<<q.second<<"\n";
    }
    for(int i=0;i<map.size();i++)
    {
        cout<<s[i]<<map[s[i]];
    }
}