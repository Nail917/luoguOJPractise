#include <bits/stdc++.h>
using namespace std;

int main(){
	string finder;
	cin >> finder;
	for(int i=0;i<(int)(finder.length());i++){
		finder[i]=tolower(finder[i]);
	}
	
	char charTemp;
	string stringTemp;
	int place=0;
	int resultHeadPlace,count=0;
	bool frontWord=false;
	bool firstMatch=true;
	getchar();
	string line;
	getline(cin,line);
	for(int iout=0;iout<(int)line.length();iout++){
		charTemp=line[iout];
		place++;
		if(charTemp==' '){
			if(frontWord==true){
				frontWord=false;
				for(int i=0;i<(int)(stringTemp.length());i++){
					stringTemp[i]=tolower(stringTemp[i]);
				}
				if(stringTemp==finder){
					count++;
					if(firstMatch==true){
						resultHeadPlace=place-stringTemp.length()-1;
						firstMatch=false;
					}
				}
				stringTemp="";
			}
		}
		else{
			stringTemp+=charTemp;
			frontWord=true;
		}
	}
	for(int i=0;i<(int)(stringTemp.length());i++){
		stringTemp[i]=tolower(stringTemp[i]);
	}
	if(stringTemp==finder){
		count++;
		if(firstMatch==true){
			resultHeadPlace=place-stringTemp.length()-1;
			firstMatch=false;
		}
	}
	if(count==0){
		cout << "-1";
		return 0;
	}
	else{
		printf("%d %d",count,resultHeadPlace);
		return 0;
	}
	return -1;
}
