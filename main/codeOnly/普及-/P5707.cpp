#include <bits/stdc++.h>
using namespace std;

int main(){
	double s,v;
	cin >> s >> v;
	int all_Minute;
	all_Minute=ceil(s/v)+10;
	int minute=60,hour=7;
	while(1){
		if(all_Minute>=60){		//all_Minute>=60, 进位
			all_Minute-=60;
			hour--;
		}
		else{		//all_Minute<60, 不用进位
			minute-=all_Minute;
			break;
		}
	}
	if(hour<0){
		hour+=24;
		if(hour<8){
			hour=8;
			minute=0;
		}
	}
	
	printf("%02d:%02d",hour,minute);
	return 0;
}
