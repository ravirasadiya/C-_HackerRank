#include<bits/stdc++.h>
#define ll long long int
#define MAX 100005
using namespace std;
set<int> fibonaci;

void createHash() {
	 int prev=0,curr= 1;
	 
	 fibonaci.insert(prev);
	 fibonaci.insert(curr);
	 
	while (curr <= MAX) {
		int temp = curr + prev;
		fibonaci.insert(temp);
		prev = curr;
		curr = temp;
	}
	 
}

bool checkArray ( int a[], int n) {
	ll sum = 0;
	for(int i = 0;i < n ;i++) {
		if(fibonaci.find(a[i]) != fibonaci.end()) {
			sum += a[i];
		}
	}
	
	if(fibonaci.find(sum) != fibonaci.end()) {
		return true;
	} else {
		return false;
	}
}

int main () {
	int arr [] = {1,2,6};
	int n  = sizeof(arr) / sizeof(arr[0]);
	
	createHash();
	if(checkArray(arr,n)) {
		cout << "Yes";
	} else {
		cout << "No";
	}
	return 0;
}
