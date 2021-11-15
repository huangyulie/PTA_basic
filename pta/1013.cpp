#include<stdio.h>
#include<math.h>
int main(){
	int num1,num2;scanf("%d %d",&num1,&num2);int i,j,flag,count=0,count1=0;
	for(i=2;;i++){
		flag=0;
		for(j=2;j<sqrt(i)+1;++j){
			if(i==2){
				break;
			}
			if(i%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			count1++;
			if(count1>=num1 && count1<num2){
				count++;
				if(count<10){
					printf("%d ",i);
				}
				else{
					printf("%d\n",i);
					count=0;
				}
			}
			else if(count1==num2){
				printf("%d",i);
			}
			else if(count1>num2){
				break;
			}
		}
	} 
}
