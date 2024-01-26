#include <bits/stdc++.h>
using namespace std;
int a=1,b=2;

int zuoxia(int f){
	int i;
	for(i=1;i<=f;i++){
		a++;
		b--;
		if(b==1){
			break;
		}
	}
	if(i==f){
		return -1;
	}
	else{
		return (f-i);
	}
}

int youshang(int f){
	int i;
	for(i=1;i<=f;i++){
		a--;
		b++;
		if(a==1){
			break;
		}
	}
	if(i==f){
		return -1;
	}
	else{
		return (f-i);
	}
}

int main(){
	int find;
	scanf("%d",&find);
	if(find==1){
		cout << "1/1";
		return 0;
	}
	if(find==2){
		cout << "1/2";
		return 0;
	}
	int last=find-2,temp;
	while(1){
		temp=zuoxia(last);
		if(temp==-1){
			break;
		}
		else{
			last=temp;
		}
		
		if(last==1){
			a++;
			break;
		}
		else{
			a++;
			last--;
		}
		
		temp=youshang(last);
		if(temp==-1){
			break;
		}
		else{
			last=temp;
		}
		
		if(last==1){
			b++;
			break;
		}
		else{
			b++;
			last--;
		}
	}
	
	cout << a << "/" << b;
	return 0;
}
