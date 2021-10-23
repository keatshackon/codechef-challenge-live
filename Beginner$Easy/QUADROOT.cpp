#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	double a,b,c,d;
	cin>>a>>b>>c;
	
	cout << fixed << setprecision(6);
    d = sqrt((b * b) - (4 * a * c));
    
    cout << (-b + d) / (2 * a) << '\n';
    cout << (-b - d) / (2 * a);

}