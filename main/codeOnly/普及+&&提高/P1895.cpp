#include <bits/stdc++.h>
using namespace std;
vector<long long int> Eachnumber={0};

int searchReturnP;
long long int searchReturnV;
void erFenSearch(long long int wantFind){
	long long int vleft=Eachnumber[1],vright=Eachnumber[94822],vmiddle;    //value
	int pleft=1,pright=94822,pmiddle;    //place
	while(1){
		pmiddle=(pright+pleft)/2;
		vmiddle=Eachnumber[pmiddle];
		if(wantFind==vmiddle){searchReturnP=pmiddle; searchReturnV=vmiddle; return;}
		if(wantFind==vleft){searchReturnP=pleft; searchReturnV=vleft; return;}
		if(wantFind==vright){searchReturnP=pright; searchReturnV=vright; return;}
		
		if(wantFind<vmiddle){
			if(pright==pmiddle){
				searchReturnP=pleft;
				searchReturnV=vleft;
				return;
			}
			vright=vmiddle;
			pright=pmiddle;
		}
		else{    //wantFind>vmiddle
			if(pleft==pmiddle){
				searchReturnP=pmiddle;
				searchReturnV=vmiddle;
				return;
			}
			vleft=vmiddle;
			pleft=pmiddle;
		}
	}
}

int main(){
	//freopen("in.txt","r",stdin);
	//freopen("out.txt","w",stdout);
	
	//打表 - 时间应该没问题，最大的数在lli内，在2^31-1外
	for(int i=1;i<99999;i++){
		long long int tempint;
		if(i<=9){
			tempint=i;
		}
		else if(i<=99){
			tempint=1*9;
			tempint+=(2*(i-9));
		}
		else if(i<=999){
			tempint=9+2*90;
			tempint+=(3*(i-99));
		}
		else if(i<=9999){
			tempint=9+2*90+3*900;
			tempint+=(4*(i-999));
		}
		else if(i<99999){
			tempint=9+2*90+3*900+4*9000;
			tempint+=(5*(i-9999));
		}
		tempint+=Eachnumber.back();
		Eachnumber.push_back(tempint);
	}
	/*
	  //cout << Eachnumber.back();
	  for(int i=0;i<=99998;i++){
	  cout << i << ": ";
	  cout << Eachnumber[i] << "\n";
	  }
	  //*/
	
	//打表2
	/*
	  cout << Eachnumber[94822]-Eachnumber[94821];
	  //output: 463004
	 */
	string longstring="0";
	for(int i=1;(int)longstring.length()<=463006;i++){
		longstring+=to_string(i);
	}
	
	//main
	int n;
	scanf("%d",&n);
	for(int iout=1;iout<=n;iout++){
		long long int wantFind;
		cin >> wantFind;
		erFenSearch(wantFind);
		long long int more=wantFind-Eachnumber[searchReturnP];
		long long int result;
		if(more==0){
			cout << searchReturnP%10 << "\n";
		}
		else if(more/10==0){
			cout << more << "\n";
		}
		else{
			cout << longstring[more] << "\n";
		}
	}
	
	return 0;
}
