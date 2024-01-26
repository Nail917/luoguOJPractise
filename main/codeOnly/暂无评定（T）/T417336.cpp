#include <bits/stdc++.h>
using namespace std;
int A[1000006];

int main(){
	int amount;
	scanf("%d",&amount);
	for(int i=1;i<=amount;i++){
		scanf("%d",&A[i]);
	}
	int now=1,skips=0;
	while(1){
		if(now>amount){
			printf("No\n%d",skips);
			return 0;
		}
		if(now==amount){
			printf("Yes\n%d",skips);
			return 0;
		}
		skips++;
		now+=A[now];
	}
	return 0;
}
