#include <bits/stdc++.h>
using namespace std;
vector<string> correct;
vector<string> mrr;

int main(){
	//read
	string tempstring;
	int amount=0;
	while(1){
		getline(cin,tempstring);
		if(tempstring=="EOF\0")
			break;
		correct.push_back(tempstring);
		amount++;
	}
	while(1){
		getline(cin,tempstring);
		if(tempstring=="EOF\0")
			break;
		mrr.push_back(tempstring);
	}
	int minute;
	scanf("%d",&minute);
	
	//backspace
	int tempint;
	for(int i=0;i<amount;i++){
		while(1){
			if(mrr[i].find('<')==string::npos)
				break;
			tempint=mrr[i].find('<');
			if(tempint!=0)
				mrr[i].erase(tempint-1,2);
			else
				mrr[i].erase(0,1);
			
		}
	}
	/*
	  for(auto i:mrr)
	  cout << i << "\n";
	  //*/
	for(int i=0;i<amount;i++){
		while(1){
			if(correct[i].find('<')==string::npos)
				break;
			tempint=correct[i].find('<');
			if(tempint!=0)
				correct[i].erase(tempint-1,2);
			else
				correct[i].erase(0,1);
			
		}
	}
	
	//compare
	int correctchar=0;
	int tempint2;
	for(int i=0;i<amount;i++){
		tempint=(int)correct[i].length();
		tempint2=(int)mrr[i].length();
		for(int ii=0;ii<tempint&&ii<tempint2;ii++){
			if(correct[i][ii]==mrr[i][ii])
				correctchar++;
		}
		//printf("%d\n",correctchar);
	}
	//cout << correctchar;
	
	//calculate
	double doubleres;
	doubleres=60.0/minute*correctchar;
	printf("%.0f",doubleres);
	return 0;
}
