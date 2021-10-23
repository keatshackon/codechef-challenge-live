#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	float t,n,i,j,k;
	char c;
	cin>>t>>n;
	cin>>c;
	if(c == '+'){
		cout<<t+n<<"\n";
	}else if(c == '-'){
		cout<<t-n<<"\n";
	}else if(c == '*'){
		cout<<t*n<<"\n";
	}else{

		cout<<(t/n)<<"\n";
	}
	return 0;

}