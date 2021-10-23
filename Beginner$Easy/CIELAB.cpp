#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	int a,b;
	cin>>a>>b;
	int c = a-b;
	if(c<10){
		if(c == 9){
			cout<<1<<"\n";
		}else{
			cout<<c+1;
		}
	}
	else{
		int r = (a-b)%10;
		c/=10;

		if(r==9){
			cout<<c*10+(1);
		}
		else{
			cout<<c*10+(r+1);	
		}
	}
	
	
}