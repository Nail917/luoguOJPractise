#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int N,K;
	cin >> N >> K;
	long long int powerN=pow(N,N);
	
	int result=0;
	for(int i=1;i<=powerN;i++){
		if(i%10==N && (i%K)%N==0){
			result++;
		}
	}
	cout << result;
	return 0;
}
