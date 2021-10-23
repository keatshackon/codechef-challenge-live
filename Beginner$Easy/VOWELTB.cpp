#include<bits/stdc++.h>
using namespace std;
int main()
{
	char c;
	cin>>c;
	if(c == 'A' || c == 'a' || c == 'e' || c == 'E' || c == 'I' || c == 'i' || c == 'O' || c == 'o' || c == 'U' || c == 'u'){
		cout<<"Vowel\n";
	}else{
		cout<<"Consonant\n";
	}
	return 0;
}