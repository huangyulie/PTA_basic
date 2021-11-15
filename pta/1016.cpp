#include<stdio.h>
int main(){
	long long a,b,c,d;scanf("%lld %lld %lld %lld",&a,&b,&c,&d);int sum1=0,sum2=0,count;
	while(a){
		count = a%10;
		if(count==b){
			sum1=sum1*10+b;
		}
		a = a/10;
	}
	while(c){
		count = c%10;
		if(count==d){
			sum2=sum2*10+d;
		}
		c = c/10;
	}
	printf("%d",sum1+sum2);
}
