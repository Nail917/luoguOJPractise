#include <bits/stdc++.h>
using namespace std;

int main(){
	int High,Rbanjin;
	const double pai=3.14;
	double result;
	cin >> High >> Rbanjin;
	result=20000.0/pai/Rbanjin/Rbanjin/High;
	result=ceil(result);
	
	printf("%.0lf",result);
	return 0;
}
