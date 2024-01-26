#include <bits/stdc++.h>
using namespace std;
char A[110][110];

int main(){
	int nline,nlie,k;
	scanf("%d %d %d",&nline,&nlie,&k);
	for(int iline=1;iline<=nline;iline++){
		getchar();
		for(int ilie=1;ilie<=nlie;ilie++){
			scanf("%c",&A[iline][ilie]);
		}
	}
	for(int ill=1;ill<=nline;ill++){
		for(int ik=1;ik<=k;ik++){
			for(int il=1;il<=nlie;il++){
				for(int iik=1;iik<=k;iik++){
					printf("%c",A[ill][il]);
				}
			}
			printf("\n");
		}
	}
	
	return 0;
}
