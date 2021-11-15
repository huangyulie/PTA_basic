#include<stdio.h>
#include<string.h>
int main(){
	char a[100000],b[100000];gets(a);int len = strlen(a),i,flag,count,sum=0,j,count1=0;
	if(a[0]=='-')printf("-");
	for(i=1;i<len;++i){
		if(a[i]=='E'&&a[i+1]=='+'){
			flag=1;
			count = i;
		}
		if(a[i]=='E'&&a[i+1]=='-'){
			flag=0;
			count = i;
		}
	}
	for(i=3,j=0;i<count;++i,++j){
		b[j]=a[i];
		count1++;
	}
	for(i=count+2;i<len;++i){
		sum=sum*10+(a[i]-'0');
	}
	if(flag==1&&sum!=0){
		if(sum-count1<0){
			printf("%c",a[1]);
			for(i=0;i<sum;++i)printf("%c",b[i]);
			printf(".");
			for(j=i;j<count1;++j)printf("%c",b[i]);
		}else if(sum-count1==0){
			printf("%c",a[1]);
			for(i=0;i<sum;++i)printf("%c",b[i]);
			for(j=i;j<count1;++j)printf("%c",b[i]);
		}
		else{
			printf("%c",a[1]);
			for(i=0;i<count1;++i)printf("%c",b[i]);
			for(i=0;i<sum-count1;++i)printf("0");
		}
	}
	else if(flag==0&&sum!=0){
		printf("0.");
		for(i=1;i<sum;++i)printf("0");
		printf("%c",a[1]);
		for(i=0;i<count1;++i)printf("%c",b[i]);
	}else{
		for(i=1;i<count;++i){
			printf("%c",a[i]);
		}
	}
} 
