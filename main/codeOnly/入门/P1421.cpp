#include <bits/stdc++.h>
using namespace std;

int main(){
	int haveyuan,havejiao;
	scanf("%d %d",&haveyuan,&havejiao);
	int havealljiao;
	havealljiao=10*haveyuan+havejiao;
	havealljiao/=19;
	
	cout << havealljiao;
	return 0;
}
