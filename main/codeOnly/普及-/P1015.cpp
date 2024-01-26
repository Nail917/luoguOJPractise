#include <bits/stdc++.h>
using namespace std;
vector<int> a(10004,0),z(10004,0),addition(10004,0);    //0~10003

int main(){
	int jingzhi;
	string stra;
	cin >> jingzhi >> stra;
	if(jingzhi==16){
		for(int i=10004-(int)stra.length(),ii=0;i<=10003;i++,ii++){
			if(stra[ii]<='9' && stra[ii]>='0'){
				a[i]=stra[ii]-'0';
			}
			else{
				a[i]=stra[ii]-'A'+10;
			}
		}
	}
	else{
		for(int i=10004-(int)stra.length(),ii=0;i<=10003;i++,ii++){
			a[i]=stra[ii]-'0';
		}
	}
	
	int iout;
	int tempBIlength=10004-(int)stra.length(),tempweiint,tempi,temp1=0;
	bool tempb=true;
	for(iout=0;iout<=30;iout++){
		//高精度计算addition[]
		for(tempi=10003;tempi>=tempBIlength;tempi--){
			tempweiint=a[tempi]+z[tempi]+temp1;
			addition[tempi]=tempweiint%jingzhi;
			temp1=tempweiint/jingzhi;
		}
		tempi++;
		addition[tempi-1]=temp1;
		if(addition[tempi-1]==0){
			tempBIlength=tempi;
		}
		else{
			tempBIlength=tempi-1;
		}
		temp1=0;
		
		//求出a[]和z[]
		for(int i=10003,ii=tempBIlength;i>=tempBIlength;i--,ii++){
			a[i]=addition[i];
			z[ii]=addition[i];
		}
		
		//判断addition[]是否为“回文数”
		for(int i=10003;i>=tempBIlength;i--){
			if(a[i]!=z[i]){
				tempb=false;
				break;
			}
		}
		if(tempb){
			cout << "STEP=" << iout;
			return 0;
		}
		tempb=true;
	}
	cout << "Impossible!";
	
	return 0;
}
