#include <bits/stdc++.h>
using namespace std;
#define ulli unsigned long long int

struct members{
	string name;
	int position=6,pastorder,level;
	ulli contribution;
}datum[200];

bool sortRule1(members a,members b){
	//contribution, pastorder
	if(a.contribution==b.contribution){
		return a.pastorder<b.pastorder;
	}
	else{
		return a.contribution>b.contribution;
	}
}

bool sortRule2(members a,members b){
	//position, level, pastorder
	if(a.position==b.position){
		if(a.level==b.level){
			return a.pastorder<b.pastorder;
		}
		else{
			return a.level>b.level;
		}
	}
	else{
		return a.position<b.position;
	}
}

void fposition(int fn){
	switch(fn){
	case 0:
		printf(" BangZhu ");
		break;
	case 1:
		printf(" FuBangZhu ");
		break;
	case 2:
		printf(" HuFa ");
		break;
	case 3:
		printf(" ZhangLao ");
		break;
	case 4:
		printf(" TangZhu ");
		break;
	case 5:
		printf(" JingYing ");
		break;
	case 6:
		printf(" BangZhong ");
		break;
	}
}

int main(){
	int n;
	scanf("%d",&n);
	string tempstring;
	for(int i=0;i<n;i++){
		cin >> datum[i].name >> tempstring;
		scanf("%d %d",&datum[i].contribution,&datum[i].level);
		datum[i].pastorder=i;
	}
	sort(datum+3,datum+n,sortRule1);
	datum[0].position=0;
	datum[1].position=datum[2].position=1;
	datum[3].position=datum[4].position=2;
	for(int i=5;i<=8;i++)
		datum[i].position=3;
	for(int i=9;i<=15;i++)
		datum[i].position=4;
	for(int i=16;i<=40;i++)
		datum[i].position=5;
	sort(datum,datum+n,sortRule2);
	for(int i=0;i<n;i++){
		cout << datum[i].name;
		fposition(datum[i].position);
		printf("%d\n",datum[i].level);
	}
	return 0;
}
