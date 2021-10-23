#include<bits/stdc++.h>
using namespace std;

void fun(strin s1, string s2, int i, int j) {

	if (i >= s1.length() || j >= s2.length()) {
		return ;
	}
	if (s1[i] == s2[i]) {
		i++;
		j++;
	} else {
		i++;
	}
	return 0;
}



int main() {

	s1 = "transformation";
	s2 = "form";

	fun(s1, s2, 0, 0);
	return 0;
}