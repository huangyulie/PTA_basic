#include<stdio.h>

int main(){
	int num,i=0;scanf("%d",&num);int a[10001];
	while(i<num){
		scanf("%d",&a[i]);i++;
	}
	float sum1,sum2,sum3,sum4,sum5,flag1,flag2,flag3,flag4,flag5,sum44,flag22;
	sum1=0;sum2=0;sum3=0;sum4=0;sum5=0,sum44=0;
	flag1=0;flag2=0;flag3=0;flag4=0;flag5=0,flag22=0;
	for(i=0;i<num;++i){
		if(a[i]%5==0 && a[i]%2==0){
			sum1 = sum1+a[i];
			flag1=1;
		}
		if(a[i]%5==1){
			if(flag22==0){
				flag22=1;
				sum2+=a[i];
			}else{
				flag22=0;
				sum2-=a[i];
			}
			flag2=1;
		}
		if(a[i]%5==2){
			sum3++;
			flag3=1;
		}
		if(a[i]%5==3){
			sum4=sum4+a[i];
			sum44++;
			flag4=1;
		}
		if(a[i]%5==4){
			if(a[i]>sum5){
				sum5 = a[i];
			}
			flag5=1;
		}
	}
	if(flag1){
		printf("%.0lf ",sum1);
	}else{
		printf("N ");
	}
	if(flag2){
		printf("%.0lf ",sum2);
	}else{
		printf("N ");
	}
	if(flag3){
		printf("%.0lf ",sum3);
	}else{
		printf("N ");
	}
	if(flag4){
		printf("%.1lf ",sum4/sum44);
	}else{
		printf("N ");
	}
	if(flag5){
		printf("%.0lf",sum5);
	}else{
		printf("N");
	}
} 
