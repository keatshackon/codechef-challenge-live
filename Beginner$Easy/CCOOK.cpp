#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll t,n,a;
	cin>>t;
	while(t--){
		int cnt =0 ;
		for(int i=0;i<5;i++){
			cin>>a;
			if(a==1){
				cnt++;
			}
		}
		switch(cnt){
			case 0:
				cout<<"Beginner"<<"\n";
				break;
			case 1:
				cout<<"Junior Developer"<<"\n";
				break;
			case 2:
				cout<<"Middle Developer"<<"\n";
				break;
			case 3:
				cout<<"Senior Developer"<<"\n";
				break;
			case 4:
				cout<<"Hacker"<<"\n";
				break;
			case 5:
				cout<<"jeff Dean"<<"\n";
				break;

		}
	}
}