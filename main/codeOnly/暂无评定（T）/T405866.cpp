#include <bits/stdc++.h>
using namespace std;
long long int ndata;
int last[27];

int main(){
	int n;
	scanf("%d",&n);
	long long int temp1,temp2;
	cin >> temp1 >> temp2;
	ndata=temp1^temp2;
	long long int temp;
	for(int i=1;i<=n-2;i++){
		scanf("%lld",&temp);
		ndata=ndata^temp;
	}
	cout << ndata << " 0";
	/*
	  int ndatalength=0;
	  long long int ndatatemp=ndata;
	  while(ndatatemp/=10){
	  ndatalength++;    //0~ndatalength
	  }
	  for(int i=ndatalength;i>=0;i--){
	  last[i]=ndata%10;
	  ndata/=10;
	  }
	 */
	return 0;
}
