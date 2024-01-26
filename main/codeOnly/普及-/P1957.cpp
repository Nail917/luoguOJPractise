#include <bits/stdc++.h>
using namespace std;

int leng(int fn){
	int len=0;
	if(fn==0){
		return 1;
	}
	fn=abs(fn);
	while(fn){
		fn/=10;
		len++;
	}
	return len;
}

int func(string fstring,int fa,int fb){
	int res;
	if(fstring=="a"){
		res=fa+fb;
		printf("%d+%d=%d\n",fa,fb,res);
	}
	else if(fstring=="b"){
		res=fa-fb;
		printf("%d-%d=%d\n",fa,fb,res);
	}
	else{
		res=fa*fb;
		printf("%d*%d=%d\n",fa,fb,res);
	}
	if(res<0){
		return leng(fa)+leng(fb)+3+leng(res);
	}
	return leng(fa)+leng(fb)+2+leng(res);
}

int main(){
	int n;
	cin >> n;
	string laststring;
	for(int iout=1;iout<=n;iout++){
		string nstring;
		cin >> nstring;
		if(nstring!="a"&&nstring!="b"&&nstring!="c"){
			int a,b,length;
			a=stoi(nstring);
			cin >> b;
			length=func(laststring,a,b);
			printf("%d\n",length);
		}
		else{
			int a,b,length;
			scanf("%d %d",&a,&b);
			length=func(nstring,a,b);
			laststring=nstring;
			printf("%d\n",length);
		}
	}
	return 0;
}
