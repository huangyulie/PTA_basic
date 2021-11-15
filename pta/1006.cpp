#include<bits/stdc++.h>
using namespace std;
int main(){
	int num;scanf("%d",&num);int a,count=0,b[1000],i,j;
	while(num){
		a = num%10;
		b[count] = a;
		count++;
		num = num/10;
	}
	for(i=count-1;i>=0;--i){
		if(i==2){
			for(j=0;j<b[i];++j)
			printf("B");
		}
		else if(i==1){
			for(j=0;j<b[i];++j)
			printf("S");
		}
		else{
			for(j=0;j<b[i];++j)
			printf("%d",j+1);
		}
	}
} 
