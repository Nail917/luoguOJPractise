#include <bits/stdc++.h>
using namespace std;
string ndata[10004];
bool found[10004]={};
int nname,ncall;

int find(string fname){
	for(int i=1;i<=nname;i++){
		if(ndata[i]==fname){
			return i;
		}
	}
	return -1;
}

int main(){
	scanf("%d",&nname);
	for(int i=1;i<=nname;i++){
		cin >> ndata[i];
	}
	scanf("%d",&ncall);
	
	string stemp;
	int itemp;
	for(int iout=1;iout<=ncall;iout++){
		cin >> stemp;
		itemp=find(stemp);
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
