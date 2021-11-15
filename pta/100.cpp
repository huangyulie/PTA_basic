#include<stdio.h>
#include<string.h>
int main(){
    char str[2000];int i,num,q,p;
    scanf("%s %d",&str,&num);
    int len = strlen(str);
    q = (str[0]-'0')/num;
    if(len == 1 || (len>1 && q!=0)){
    	printf("%d",q);
	}
	p = (str[0]-'0')%num;
	for(i=1;i<len;++i){
		q = (p*10+(str[i]-'0'))/num;
		printf("%d",q);
		p = (p*10+(str[i]-'0'))%num;
	}
	printf(" %d",p);
}
