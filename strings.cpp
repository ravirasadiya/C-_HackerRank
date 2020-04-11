#include <iostream>
#include <string>
#include <bits/stdc++.h> 
using namespace std;

int countwords(string ss) {
	stringstream s(ss);
	string words;
	int count = 0;
	while(s >> words) 
		count++;
	return count;
}

int main() {
	string s = "Hello world fff huu uuff ufuuu fuuuf";
	cout<< "words : " << countwords(s);
	return 0;
}
