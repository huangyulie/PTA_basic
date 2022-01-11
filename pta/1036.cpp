#include<stdio.h>
int main(){
	int num;char a;scanf("%d %c",&num,&a);
	int i,j,b;
	for(i=0;i<num;++i){
		printf("%c",a);
	}
	printf("\n");
	b = (int)((num/2.0)+0.5);
	for(i=0;i<b-2;++i){
		for(j=0;j<num;++j){
			if(j==0||j==num-1){
				printf("%c",a);
			}else{
				printf(" ");
			}
		}
		printf("\n");
	}
	for(i=0;i<num;++i){
		printf("%c",a);
	}
}
