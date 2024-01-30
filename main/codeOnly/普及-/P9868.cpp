#include <bits/stdc++.h>
using namespace std;
vector<string> eachmin;
bool sameReverse[3009];

int main(){
	/*
	freopen("dict4.in","r",stdin);
	freopen("dict4.out","w",stdout);
	//*/
	int n,length;
	scanf("%d %d",&n,&length);
	char tempchar;    //输入的char暂存在tempchar中
	string minInEachmax=string(length,'z'),secondminInEachmax=string(length,'a');
	for(int iout=0;iout<n;iout++){
		vector<int> A(26,0);
		getchar();
		for(int i=1;i<=length;i++){
			tempchar=getchar();
			A[(int)tempchar-(int)'a']++;
		}
		string tempstring="";    //拼出最大和最小string
		for(int i=0;i<26;i++){
			tempstring+=string(A[i],char(i+(int)'a'));
		}
		eachmin.push_back(tempstring);
		reverse(tempstring.begin(),tempstring.end());
		//minInEachmax=min(minInEachmax,tempstring);
		if(tempstring<minInEachmax){
			secondminInEachmax=minInEachmax;
			minInEachmax=tempstring;
		}
		else if(tempstring<secondminInEachmax){
			secondminInEachmax=tempstring;
		}
		sameReverse[iout]=eachmin[iout]==tempstring?true:false;
		
	}
	/*
	for(auto i:eachmin)
		cout << i << " ";
	printf("\n");
	cout << minInEachmax;
	//output: 
	//aabdnno aaaabnn aaaabnn nnnoott
	//nnbaaaa
	//*/
	for(int i=0;i<n;i++){
		if(eachmin[i]==minInEachmax&&sameReverse[i]){
			if(eachmin[i]<secondminInEachmax)
				printf("1");
			else
				printf("0");
			continue;
		}
		if(eachmin[i]<minInEachmax)
			printf("1");
		else
			printf("0");
	}
	return 0;
}
