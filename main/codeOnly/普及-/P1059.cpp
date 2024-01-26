#include <bits/stdc++.h>
using namespace std;
vector<bool> ndata(1003,false);

int main(){
	int n,temp,amount=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&temp);
		if(!ndata[temp]){
			amount++;
			ndata[temp]=true;
		}
		
	}
	printf("%d\n",amount);
	for(int i=1,times=0;i<=1000,times<amount;i++){
		if(ndata[i]){
			printf("%d ",i);
			times++;
		}
	}
	return 0;
}
