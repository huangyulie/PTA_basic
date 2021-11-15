#include<stdio.h>
#include<string.h>

int main(){
	int num;
	scanf("%d",&num);
	int i = 0,len,j;
	char a[1001];
	int flag;
	while(i<num){
		scanf("%s",a);
		len = strlen(a);
		flag = 0;
		for(j=0;j<len-4;++j){
			if(a[j]==''&&a[j+1]=='P'&&a[j+2]=='A'&&a[j+3]=='T'&&a[j+4]==''){
				flag = 0;
			}
			if(a[j]=='A'&&a[j+1]=='P'&&a[j+2]=='A'&&a[j+3]=='T'&&a[j+4]=='A'){
				flag = 0;
			}
		}
		for(j=0;j<len;++j){
			if(a[j]!='P' && a[j]!='A' && a[j]!='T'){
				flag = 1;
			}
		}
		if(flag){
			printf("NO\n");
		}
		else{
			printf("YES\n");
		} 
		i++;
	}
}
