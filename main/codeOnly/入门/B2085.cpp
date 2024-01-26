#include <bits/stdc++.h>
using namespace std;

vector<bool> a(1000006,true);

int main(){
	for(int i=2;i<=1003;i++){
		for(int ii=2;i*ii<=1000006;ii++){
			a[i*ii]=false;
		}
	}
	/*
	  for(int i=1;i<=100;i++){
	  cout << a[i] << " ";
	  }
	 */
	int nin,result,n=1;
	scanf("%d",&nin);
	nin++;
	int i;
	for(i=1;n<=nin;i++){
		if(a[i]==true){
			n++;
		}
	}
	printf("%d",i-1);
	return 0;
} 
