#include <bits/stdc++.h>
using namespace std;

int main(){    //还能优化（getchar找正负）
	int n;
	scanf("%d",&n);
	long long int temp;
	bool zf;
	scanf("%lld",&temp);
	if(temp<0){
		zf=false;
	}
	else{
		zf=true;
	}
	int result=0;
	for(int i=1;i<=n;i++){
		scanf("%lld",&temp);
		if((zf==true && temp<0)||(zf==false && temp>0)){
			result++;
		}
		
		if(temp<0){
			zf=false;
		}
		else{
			zf=true;
		}
	}
	cout << result;
	return 0;
}
