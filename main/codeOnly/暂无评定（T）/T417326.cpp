#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int max=a;
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	int min=a;
	if(b<min){
		min=b;
	}
	if(c<min){
		min=c;
	}
	int middle=a+b+c-max-min;
	int case1,case2;
	case1=max-min-middle;
	case1=abs(case1);
	case2=max+min-middle;
	case2=abs(case2);
	if(case1<case2){
		if(max>(min+middle)){
			printf("%d %d",max,(min+middle));
		}
		else{
			printf("%d %d",(min+middle),max);
		}
	}
	else{    //use: case1
		if(middle>(min+max)){
			printf("%d %d",middle,(min+max));
		}
		else{
			printf("%d %d",(min+max),middle);
		}
	}
	return 0;
}
