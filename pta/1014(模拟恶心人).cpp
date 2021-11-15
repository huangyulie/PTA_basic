#include<stdio.h>
#include<string.h>
int main(){
	char a[1000][1000];int i,j,len1,len2,len,flag=0;
	char b[1000][1000] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
	char c[1000][1000] = {"0","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21","22","23"};
	for(i=0;i<4;++i){
		scanf("%s",&a[i]);
	}
	len1 = strlen(a[0]);
	len2 = strlen(a[1]);
	if(len1<=len2){
		len = len1;
	}else{
		len = len2;
	}
	for(i=0;i<len;++i){
		if((a[0][i] == a[1][i]) && (flag==0) && (a[0][i]>='A' && a[0][i]<='G')){
			printf("%s ",b[a[0][i]-'A']);
			flag=1;
            i++;
		}
        if((a[0][i] == a[1][i]) && (flag==1)){
			if(a[0][i]>='0' && a[0][i]<='9'){
				printf("0%s:",c[a[0][i]-'0']);
                break;
			}
			if(a[0][i]>='A' && a[0][i]<='N'){
				printf("%s:",c[a[0][i]-'A'+10]);
                break;
			}
		}
	}
	
	len1 = strlen(a[2]);
	len2 = strlen(a[3]);
	if(len1<=len2){
		len = len1;
	}else{
		len = len2;
	}
	for(i=0;i<len;++i){
		if(a[2][i] == a[3][i] && ((a[2][i]>='a' && a[2][i]<='z') || (a[2][i]>='A' && a[2][i]<='Z'))){
            printf("%02d",i);
            break;
		}
	}
} 
