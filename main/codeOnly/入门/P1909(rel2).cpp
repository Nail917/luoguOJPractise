#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
/*
  int price[10],amount[10],res[10];
 */
int price,amount,temp_res,min_res=-1;

/*
  int main(){
  int want;
  scanf("%d",&want);
  for(int i=1;i<=3;i++){
  scanf("%d %d",&amount[i],&price[i]);
  }
  for(int i=1;i<=3;i++){
  res[i]=ceil((double)want/amount[i])*price[i];
  }
  printf("%d",min({res[1],res[2],res[3]}));
  return 0;
  }
 */

int main(){
	int want;    //需要多少支笔
	scanf("%d",&want);
	for(int i=1;i<=3;i++){
		scanf("%d %d",&amount,&price);
		temp_res=ceil((double)want/amount)*price;
		if(min_res==-1)
			min_res=temp_res;
		else
			min_res=min(min_res,temp_res);
	}
	printf("%d",min_res);
	return 0;
}
