#include <bits/stdc++.h>
using namespace std;
string ndata[10004];
bool found[10004]={};
int nname,ncall;
string stemp;

int findresult;
void find(int ffront,int fnow,int fbottom){
	if(fbottom-ffront==1){
		if(stemp==ndata[ffront]){
			findresult=ffront;
		}
		else{
			if(stemp==ndata[fbottom]){
				findresult=fbottom;
			}
			else{
				findresult=-1;
			}
		}
		return;
	}
	if(stemp<ndata[fnow]){
		find(ffront,(fnow+ffront)/2,fnow);
		return;
	}
	if(stemp>ndata[fnow]){
		find(fnow,(fnow+fbottom)/2,fbottom);
		return;
	}
	if(stemp==ndata[fnow]){
		findresult=fnow;
		return;
	}
	else{
		findresult=-1;
	}
}

int main(){
	scanf("%d",&nname);
	for(int i=1;i<=nname;i++){
		cin >> ndata[i];
	}
	sort(ndata+1,ndata+nname+1);
	scanf("%d",&ncall);
	
	int itemp;
	for(int iout=1;iout<=ncall;iout++){
		cin >> stemp;
		find(1,(nname/2),nname);
		itemp=findresult;
		if(itemp==-1){
			cout << "WRONG" << endl;
		}
		else{
			if(found[itemp]==false){    //没找到过，第一次
				found[itemp]=true;
				cout << "OK" << endl;
			}
			else{    //找到过，重复
				cout << "REPEAT" << endl;
			}
		}
	}
	return 0;
}
