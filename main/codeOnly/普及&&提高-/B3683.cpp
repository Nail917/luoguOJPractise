#include <bits/stdc++.h>
using namespace std;
vector<int> different;
int outplace;

int ffind(){
	auto nfind=find(different.begin(),different.end(),outplace);
	if(nfind==different.end()){		
		return -1;
	}
	else{
		return distance(different.begin(),nfind);
	}
}

void ferase(int fn){
	auto fauto=different.begin()+fn;
	different.erase(fauto);
	//different.shrink_to_fit();
}

void fmain(){
	char a[1000006],b[1000006];
	different.clear();
	int length,dotimes;
	//读取a,b并存放在char数组a,b中，读取length
	scanf("%d %d",&length,&dotimes);
	getchar();
	for(int i=1;i<=length;i++){
		a[i]=getchar();
	}
	getchar();
	for(int i=1;i<=length;i++){
		b[i]=getchar();
	}
	
	//判断a,b每一位是否相等？相等 & Bool设为true：不相等 & Bool设为false，falseinBool++
	for(int i=1;i<=length;i++){
		if(a[i]!=b[i]){
			different.emplace_back(i);
		}
	}
	
	//循环{更改值，判断更改位数true还是false}
	int secondone;    //0：a[]，1：b[]
	int place;
	char turn;
	int findtemp;
	for(int i=1;i<=dotimes;i++){
		if(different.size()==0){
			printf("Yes\n");
		}
		else{
			printf("No\n");
		}
		
		scanf("%d %d %c",&secondone,&place,&turn);
		outplace=place;
		if(secondone==0){
			a[place]=turn;
		}
		else{
			b[place]=turn;
		}
		findtemp=ffind();
		if(findtemp==-1){
			if(a[place]!=b[place]){
				different.emplace_back(place);
			}
		}
		else{
			if(a[place]==b[place]){
				ferase(findtemp);
			}
		}
	}
	if(different.size()==0){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
}

int main() {
	int times;
	scanf("%d",&times);
	for(int ioutout=1;ioutout<=times;ioutout++){
		fmain();
	}
	return 0;
}
