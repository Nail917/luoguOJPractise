#include <bits/stdc++.h>
using namespace std;
int price[10],amount[10],res[10];

int main(){
	int want;
	scanf("%d",&want);
	for(int i=1;i<=3;i++){
		scanf("%d %d",&amount[i],&price[i]);
	}
	for(int i=1;i<=3;i++){
		res[i]=ceil((double)want/amount[i])*price[i];
	}
	printf("%d",min(min(res[1],res[2]),res[3]));
	return 0;
}
