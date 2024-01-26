#include<bits/stdc++.h>
using namespace std;

int main(){
	double a,b,c;
	double result,p;
	scanf("%lf%lf%lf",&a,&b,&c);
	p=(a+b+c)/2;
	result=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.1lf",result);
	return 0;
}
