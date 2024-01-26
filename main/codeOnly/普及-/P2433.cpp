#include <bits/stdc++.h>
using namespace std;
const double PAI=3.141593;
const int R=5;

int main(){
	short nincase;
	scanf("%hd",&nincase);
	switch (nincase) {
	case 1:
		printf("I love Luogu!");
		break;
	case 2:
		printf("6 4");
		break;
	case 3:
		printf("3\n12\n2");
		break;
	case 4:
		printf("166.667");
		break;
	case 5:
		printf("15");
		break;
	case 6:
		//题目要求用cout输出
		cout << sqrt(36+81);
		break;
	case 7:
		printf("110\n90\n0");
		break;
	case 8:
		//题目又要求用cout输出
		cout << 2*PAI*R << endl << PAI*R*R << endl << 4/3.0*PAI*R*R*R;
		break;
	case 9:
		printf("22");
		break;
	case 10:
		printf("9");
		break;
	case 11:
		//题目又又要求用cout输出
		cout << 100/3.0;
		break;
	case 12:
		printf("13\nR");
		break;
	case 13:
		printf("16");
		break;
	case 14:
		printf("50");
		break;
	}
	return 0;
}
