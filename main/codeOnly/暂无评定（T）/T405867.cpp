#include <bits/stdc++.h>
using namespace std;
vector<int> ndata={0};
int hang,lie;

void f(){
	int max=-1,temp,maxplace=-1;
	for(int iout=1;iout<=lie;iout++){
		scanf("%d",&temp);
		ndata.push_back(temp);
		if(max<temp){
			max=temp;
			maxplace=iout;
		}
	}
	int fres=0;
	for(int i=1;i<maxplace;i++){
		if(ndata[i]!=0){
			fres++;
		}
	}
	printf("%d %d\n",maxplace,fres);
	ndata.clear();
	ndata.push_back(0);
}

int main(){
	scanf("%d %d",&hang,&lie);
	for(int imain=1;imain<=hang;imain++){
		f();
	}
	return 0;
}
