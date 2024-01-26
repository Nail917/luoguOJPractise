#include <bits/stdc++.h>
using namespace std;
int nchar[30]={};

int f(int fnum){
	if(fnum<=1){
		return -1;
	}
	if(fnum<=3){
		return 2;
	}
	if(fnum%2==0 || fnum%3==0){
		return 4;
	}
	for(int fi=5;fi*fi<=fnum;fi+=6){
		if(fnum%fi==0 || fnum%(fi+2)==0){
			return 4;
		}
	}
	return 2;
}

int main(){
	/*
	  freopen("ls.in","r",stdin);
	  freopen("ls.out","w",stdout);
	 */
	char charTemp;
	while(cin>>charTemp){
		nchar[(int)charTemp-96]++;
	}
	int max=nchar[(int)charTemp-96];
	int min=nchar[(int)charTemp-96];
	for(int i=1;i<=26;i++){
		if(nchar[i]>max){
			max=nchar[i];
		}
		if(nchar[i]<min&&nchar[i]!=0){
			min=nchar[i];
		}
	}
	
	if(f(max-min)==2){
		cout << "Lucky Word" << endl;
		cout << max-min;
	}
	else{
		cout << "No Answer" << endl << "0";
	}
	/*
	  fclose(stdin);
	  fclose(stdout);
	 */
	return 0;
}
