#include <bits/stdc++.h>
using namespace std;
//https://www.luogu.com.cn/problem/P3865
//基础ST表，动态规划
long long int findmax[100005][25];
inline int read(){
	int x=0,f=1;
	char ch=getchar();
	while (ch<'0'||ch>'9'){
		if (ch=='-'){
			f=-1;
		}
		ch=getchar();
	}
	while (ch>='0'&&ch<='9'){
		x=x*10+ch-48;ch=getchar();
	}
	return x*f;
}

int main() {
	long long int n, m;
	scanf("%lld %lld", &n, &m);
	//n数列总长度，m访问次数
	
	for(int i=1;i<=n;i++){
		findmax[i][0]=read();
	}
	for(int j=1;j<=25;j++){
		for(int i=1;i+pow(2,j)-1<=n;i++){
			findmax[i][j]=max(findmax[i][j-1],findmax[i+(long long int)(pow(2,j-1))][j-1]);
		}
	}
	
	long long int left, right;
	long long int log;
	for (long long int iout = 1; iout <= m; iout++) {
		scanf("%lld %lld", &left, &right);
		log=(long long int)(log2(right-left+1));
		printf("%lld\n",max(findmax[left][log],
			findmax[(right-(long long int)(pow(2,log))+1)][log]));
	}
	return 0;
}
