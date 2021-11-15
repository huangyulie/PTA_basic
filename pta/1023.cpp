#include<stdio.h>

int main(){
	int i,j,a[11],b[10001],flag=0;for(i=0;i<10;++i)scanf("%d",&a[i]);
	if(a[0]!=0){
		for(j=1;j<10;++j){
			if(a[j]!=0){
				printf("%d",j);
				a[j]--;
				break;
			}
		}
	}
		
	for(i=0;i<10;++i){
		for(j=0;j<a[i];++j){
			printf("%d",i);
		}
	}
} 
