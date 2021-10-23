#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    long long t;
    cin >> t;
    while( t--)
    {
        int n;
        cin>>n;
        std::vector<int>v(n);
        for(int i = 0; i < n; i++)
            cin >>v[i];
        sort(v.begin(),v.end());
        cout<<v[0] + v[1] <<endl;

    }
}