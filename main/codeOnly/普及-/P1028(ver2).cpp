#include <bits/stdc++.h>
using namespace std;
vector<int> a(1003,0),b(1003,0);

void f(int fn){
	int times=1;
	for(int i=1;i<=fn/2;i++){
		if(a[i]==0){
			f(i);
		}
		times+=a[i];
	}
	a[fn]=times;
}

int main(){
	a[1]=1;
	int nin;
	cin >> nin;
	f(nin);
	cout << a[nin];
	return 0;
}
