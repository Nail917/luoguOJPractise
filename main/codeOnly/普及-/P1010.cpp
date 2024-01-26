#include <bits/stdc++.h>
using namespace std;
int a[16]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768};

void f(int fn){
	if(fn==1){
		cout << "2(0)";
		return;
	}
	if(fn==2){
		cout << "2";
		return;
	}
	
	//一般情况
	for(int i=14;i>=1;i--){
		if(a[i]<fn){
			if(i==1){
				cout << "2+";
				f(fn-a[i]);
				break;
			}
			cout << "2(";
			f(i);
			cout << ")+";
			f(fn-a[i]);
			break;
		}
		else{
			if(a[i]==fn){
				if(i==1){
					cout << "2+";
					f(fn-a[i]);
					break;
				}
				cout << "2(";
				f(i);
				cout << ")";
				break;
			}
		}
	}
}

int main(){
	int in;
	scanf("%d",&in);
	f(in);
	
	return 0;
}
