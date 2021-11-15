#include <stdio.h>
#include <string.h>
int main(){
	char a[100],b[100];
	gets(a);
	int len = strlen(a),i,j=0,k=0,flag=0;
	for(i=len-1;i>=0;--i){
		b[j] = a[i];
		j++;
	}
	b[len] = ' '; 
	for(i=0;i<=len;++i){
		if(b[i]==' '){
			for(j=i-1;j>=k;--j){
				printf("%c",b[j]);
			}
			k = i+1;
			if(i<len){
				printf(" ");
			}
		}
	}
} 
