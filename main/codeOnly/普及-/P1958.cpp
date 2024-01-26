#include <bits/stdc++.h>
using namespace std;
vector<int> datum(100,0);

int main(){
	char tempc;
	while(scanf("%c",&tempc)!=EOF){
		if('A'<=tempc&&tempc<='Z'){
			datum[(int)tempc-(int)'A']++;
		}
	}
	int nmax=datum[0];
	for(int i=1;i<=25;i++){
		nmax=max(nmax,datum[i]);
	}
	for(int i=nmax;i>=1;i--){
		int ii=1,space=0;
		if(datum[0]>=i){
			printf("*");
		}
		else{
			printf(" ");
		}
		while(ii<=25){
			if(datum[ii]>=i){
				for(int ispace=1;ispace<=(2*ii-2*space-1);ispace++){
					printf(" ");
				}
				printf("*");
				space=ii;
			}
			ii++;
		}
		printf("\n");
	}
	char printTempChar;
	for(int i=0;i<=24;i++){
		printTempChar=(char)('A'+i);
		printf("%c ",printTempChar);
	}
	printf("Z");
	return 0;
}
