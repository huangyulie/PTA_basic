#include<stdio.h>
int main(){
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	while(1){
		if(num2==0){
			printf("0 0");
			break;
		}
		num1 = num1*num2;
		num2--;
		printf("%d %d",num1,num2);
		scanf("%d %d",&num1,&num2);
		if(num2!=0){
			printf(" ");
		}else{
			break;
		}
	}
}
