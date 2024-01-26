#include <bits/stdc++.h>
using namespace std;

int sortRule(const string & a,const string & b){
	return ((a+b)>(b+a));
}

int main() {
	string data[22];
	int n;
	cin >> n;
	for(int i=0; i<=n-1; i++) {
		cin >> data[i];
	}
	
	sort(data,data+n,sortRule);
	
	for(int i=0; i<=n-1; i++) {
		cout << data[i];
	}
	return 0;
}
