#include<bits/stdc++.h>
using namespace std; 
int main(){
	int num;scanf("%d",&num);long long i=0,num1,num2,num3;
	while(i++<num){
		scanf("%lld %lld %lld",&num1,&num2,&num3);
		if(num1+num2>num3){
			printf("Case #%d: true\n",i);
		}
		else{
			printf("Case #%d: false\n",i);
		}
	}
} 
