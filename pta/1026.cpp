#include<stdio.h>
int main(){
	float a,b,num;scanf("%f %f",&a,&b);num=(b-a)/100;
	num=(int)(num+0.5);
	float s,f,m;
	s = (int)num/60/60;
	f = (int)num/60%60;
	m = (int)num%60;
	printf("%.0f:%.0f:%.0f",s,f,m);
}
