#include<stdio.h>
#include<string.h>
int main(){
	int i,sum=0,a1;
	char a[10000];
	char b[1000][1000];
	char c[1000][1000] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	scanf("%s",&a);
	for(i=0;i<strlen(a);++i){
		sum = sum + a[i] - '0';
	}
	int count = 0;
	while(sum){
		a1 = sum%10;
		strcpy(b[count],c[a1]);
		sum/=10;
		count++;
	}
	for(i=count-1;i>0;--i){
		printf("%s ",b[i]);
	}
	printf("%s",b[i]);
}
