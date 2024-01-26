#include <bits/stdc++.h>
using namespace std;

int main(){
	long double INheight,INcarX,INcarV,INcarlength,INcarheight;
	int INballnoun;
	scanf("%Lf %Lf %Lf %Lf %Lf %d",&INheight,&INcarX,&INcarV,&INcarlength,&INcarheight,&INballnoun);
	long double times,timel;
	times=sqrt((INheight-INcarheight)*0.2);
	timel=sqrt(INheight*0.2);
	long double places,placel;
	places=INcarX-INcarV*times;
	placel=INcarX-INcarV*timel;
	//printf("%Lf %Lf",places,placel);
	int ints=(int)(places+0.0001),inl=(int)(placel+0.0001);
	ints+=INcarlength;
	if(ints>INballnoun){
		ints=INballnoun;
	}
	if(inl<0){
		inl=0;
	}
	//cout << ints << inl;
	printf("%d",(int)(ints-inl));
	return 0;
}
