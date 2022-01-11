#include<stdio.h>

int main(){
	int a[1000],i=3,num=20,x,j,k;
	a[0]=0;a[1]=1;a[2]=7;
	while(i<num){
		a[i]=a[i-1]+(a[i-1]-a[i-2]+4);
		i++;
	}
	int count;char b;scanf("%d %c",&count,&b);
	for(i=0;i<20;++i){
		if(a[i]>count){
			x=i-1;
			break;
		}
	}
	for(i=x;i>=1;--i){
		for(k=x;k>i;--k){
			printf(" ");
		}
		for(j=0;j<2*i-1;++j){
			printf("%c",b);
		}
		printf("\n");
	}
	for(i=2;i<x+1;++i){
		for(k=i;k<=x-1;++k){
			printf(" "); 
		}
		for(j=0;j<2*i-1;++j){
			printf("%c",b);
		}
		printf("\n");
	}
	printf("%d",count-a[x]);
//	for(i=0;i<9;++i)
//	printf("%d ",a[i]);
} 
