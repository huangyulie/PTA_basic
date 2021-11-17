#include<stdio.h>
#include<string.h>
int main(){
	char arr[101][100];int i,j,num;scanf("%d",&num);getchar();
	int b[4]={1,2,3,4};
	for(i=0;i<num;++i){
		gets(arr[i]);
	}
	for(i=0;i<num;++i){
		for(j=0;j<15;++j){
			if(arr[i][j]=='T'){
				printf("%d",b[(arr[i][j-2]-'A')]);
				break;
			}
		}
	}
} 
