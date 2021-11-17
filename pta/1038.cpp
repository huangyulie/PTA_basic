#include<stdio.h>
int main(){
	int num,b,c;scanf("%d",&num);int a[100]={0},i;
	for(i=0;i<num;++i){
		scanf("%d",&b);
		a[b]++;
	}
	scanf("%d",&b);
	scanf("%d",&c);
	printf("%d",a[c]);
	for(i=0;i<b-1;++i){
		scanf("%d",&c);
		printf(" %d",a[c]);
	}
}
