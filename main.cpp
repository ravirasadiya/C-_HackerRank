#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

void reverseStr(string& str) {
	int n = str.length();
	cout << n;
	for(int i = 0 ;i < n/2 ; i++)
	swap(str[i],str[n-i-1]);
}

int main() {
	string str = "Ravi";
	reverseStr(str);
	cout << str;
}


