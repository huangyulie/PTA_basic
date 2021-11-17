#include<string.h>
#include<stdio.h>
int main(){
	int a[100] = {0},i,j;char arr[100],brr[100];gets(arr);int len = strlen(arr);
	for(i=0;i<len;++i){
		if(arr[i]=='_')a[62]++;
		else if(arr[i]>='A'&&arr[i]<='Z') a[(arr[i]-55)]++;
		else if(arr[i]>='a'&&arr[i]<='z') a[(arr[i]-61)]++;
		else if(arr[i]>='0'&&arr[i]<='9') a[(arr[i]-48)]++;
	}
	gets(brr);len = strlen(brr);
	for(i=0;i<len;++i){
		if(brr[i]=='_')a[62]--;
		else if(brr[i]>='A'&&brr[i]<='Z') a[(brr[i]-55)]--;
		else if(brr[i]>='a'&&brr[i]<='z') a[(brr[i]-61)]--;
		else if(brr[i]>='0'&&brr[i]<='9') a[(brr[i]-48)]--;
	}
	for(i=0;i<=9;++i){
//		printf("%d ",a[i]);
		if(a[i]>0)printf("%d",i);
	}
	for(i=10,j=36;i<=35;++i,++j){
		if(a[i]>0||a[j]>0){
			printf("%c",i+55);
		}
	}
} 


