#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	string name[103];
	string help[103];
	for(int i=1;i<=n;i++){
		cin >> name[i];
		cin >> help[i];
	}
	int sos[103]={0};
	for(int i=1;i<=n;i++){
		while(1){
			if((int)help[i].find("sos")!=-1){
				sos[i]++;
				help[i].erase((int)help[i].find("sos"),2);
			}
			else{
				break;
			}
		}
	}
	/*Ntest*
	  for(int i=1;i<=100;i++){
	  cout << sos[i] << " ";
	  }
	  /*Ntestend*/
	string nameResult[103];
	int max=sos[1];
	for(int i=1;i<=n;i++){
		if(max<sos[i]){
			max=sos[i];
		}
	}
	int ii=0;
	for(int i=1;i<=n;i++){
		if(max==sos[i]){
			nameResult[ii]=name[i];
			ii++;
		}
	}
	sort(nameResult,nameResult+ii-1);
	for(int i=0;i<ii;i++){
		cout << nameResult[i] << " ";
	}
	cout << endl << max;
	return 0;
}
