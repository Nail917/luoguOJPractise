#include <bits/stdc++.h>
using namespace std;
int A[1000006],B[1000006];

int main(){
	int amount;
	scanf("%d",&amount);
	int emptyp,temp;
	for(int i=1;i<=amount;i++){
		scanf("%d",&temp);
		A[temp]=i;
	}
	int A0;
	for(int i=1;i<amount;i++){
		A0=A[0];
		A[0]=A[i];
		A[i]=A0;
	}
	for(int i=0;i<=amount;i++){
		B[A[i]]=i;
	}
	for(int i=1;i<=amount;i++){
		printf("%d ",B[i]);
	}
	return 0;
}
