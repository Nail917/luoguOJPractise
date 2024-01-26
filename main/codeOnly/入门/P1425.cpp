#include <bits/stdc++.h>
using namespace std;

int main() {
	int m1, m2, h1, h2;
	scanf("%d%d%d%d", &h1, &m1, &h2, &m2);
	int result;
	result = 60 * (h2 - h1) + m2 - m1;
	int resmin = 0, reshou = 0;
	while (1) {
		if (result >= 60) {
			reshou++;
			result -= 60;
		}
		else {
			resmin=result;
			break;
		}
	}
	printf("%d %d",reshou,resmin);
	return 0;
}
