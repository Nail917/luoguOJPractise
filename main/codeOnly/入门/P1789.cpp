#include <bits/stdc++.h>
using namespace std;
bool table[102][102]={};

int main(){
	int t,ntorch,nfluorite;
	int tempx,tempy;
	scanf("%d %d %d",&t,&ntorch,&nfluorite);
	for(int i=1;i<=ntorch;i++){
		scanf("%d %d",&tempx,&tempy);
		table[tempx][tempy]=true;
		table[abs(tempx-1)][tempy]=true;
		table[abs(tempx-2)][tempy]=true;
		table[tempx+1][tempy]=true;
		table[tempx+2][tempy]=true;
		table[tempx][abs(tempy-1)]=true;
		table[abs(tempx-1)][abs(tempy-1)]=true;
		table[tempx+1][abs(tempy-1)]=true;
		table[abs(tempx-1)][tempy+1]=true;
		table[tempx+1][tempy+1]=true;
		table[tempx][tempy+1]=true;
		table[tempx][abs(tempy-2)]=true;
		table[tempx][tempy+2]=true;
	}
	for(int i=0;i<nfluorite;i++){
		scanf("%d %d",&tempx,&tempy);
		for(int ix=tempx-2;ix<=tempx+2;ix++){
			for(int iy=tempy-2;iy<=tempy+2;iy++){
				table[abs(ix)][abs(iy)]=1;
			}
		}
	}
	/*Ntest*
	  for(int i=1;i<=t;i++){
	  cout << endl;
	  for(int ii=1;ii<=t;ii++){
	  cout << table[i][ii] << " ";
	  }
	  }
	 *NtestEnd*/	
	int result=0;
	for(int i=1;i<=t;i++){
		for(int ii=1;ii<=t;ii++){
			if(table[i][ii]==0){
				result++;
			}
		}
	}
	cout << result;
	return 0;
}
