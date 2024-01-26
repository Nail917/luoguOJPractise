#include <bits/stdc++.h>
using namespace std;
int a,b,c;
bool d[10];

int change(int fn){
	a=fn/100; b=fn/10%10; c=fn%10;
	d[a]=true; d[b]=true; d[c]=true;
	if(a==0||b==0||c==0){
		return -1;
	}
	return 0;
}

int main(){
	int righto;
	for(int i=192;i<=333;i++){
		for(int ii=0;ii<=9;ii++){
			d[ii]=false;
		}
		if(change(i)==-1){
			continue;
		}
		if(a!=b&&b!=c&&a!=c){
			righto=0;
			if(change(i*2)==-1){
				continue;
			}
			if(change(i*3)==-1){
				continue;
			}
			for(int ii=0;ii<=9;ii++){
				if(d[ii]==false){
					righto++;
				}
			}
			if(righto==1){
				printf("%d %d %d\n",i,i*2,i*3);
			}
			else{
				continue;
			}
		}
	}
	return 0;
}
