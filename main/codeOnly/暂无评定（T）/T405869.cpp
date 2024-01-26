#include <bits/stdc++.h>
using namespace std;
vector<string> Aname;
vector<int> Avalue;    //0~dingyis-1

void turn(){
	char ttemp;
	string stemp="";
	while(1){
		ttemp=getchar();
		if(ttemp=='}'){
			break;
		}
		else{
			stemp+=ttemp;
		}
	}
	auto fauto=find(Aname.begin(),Aname.end(),stemp);
	auto place=distance(Aname.begin(),fauto);
	int found=(int)place;
	printf("%d",Avalue[found]);
}

int main(){
	int dingyis,sentences;
	scanf("%d %d",&dingyis,&sentences);
	string tempstring;int tempint;
	for(int i=0;i<dingyis;i++){
		cin >> tempstring;
		scanf("%d",&tempint);
		Aname.push_back(tempstring);
		Avalue.push_back(tempint);
	}
	getchar();
	char tempchar;
	for(int iout=1;iout<=sentences;iout++){
		while(1){
			tempchar=getchar();
			if(tempchar=='\n'){
				break;
			}
			if(tempchar=='{'){
				turn();
				continue;
			}
			else{
				printf("%c",tempchar);
			}
		}
		printf("\n");
		
	}
	return 0;
}
