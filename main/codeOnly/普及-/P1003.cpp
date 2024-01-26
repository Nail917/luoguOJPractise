#include <bits/stdc++.h>
using namespace std;
int info[500005];


int main(){
	int n;
	cin >> n;
	for(int i=1;(i/5+1)<=n;i+=5){
		cin >> info[i] >> info[i+1] >> info[i+2] >> info[i+3];
		info[i+4]=i/5+1;
	}
	int x,y;
	cin >> x >> y;
	/*Ntest*
	  for(int i=1;i<=100;i++){
	  cout << info[i] << " ";
	  }
	  /*Ntestend*/
	
	bool have=false;
	for(int i=(5*n)-4;i>=1;i-=5){
		if(info[i]<=x && info[i+2]+info[i]-1>=x && info[i+1]<=y && info[i+3]+info[i+1]-1>=y){
			have=true;
			cout << info[i+4];
			break;
		}
	}
	if(have==false){
		cout << "-1";
	}
	
	return 0;
}
