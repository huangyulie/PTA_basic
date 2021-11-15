#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main(){
	int num;scanf("%d",&num);int i=0,a,arr[4],sum1,sum2,sum3,t;
	sum3 = num;
	if(sum3==6174){
		sum1=0;sum2=0,i=0;
		while(i<4){
		arr[i] = sum3%10;
		sum3/=10;
		i++;
		}
		sort(arr,arr+4);
		for(i=0;i<4;++i){
			sum1=sum1*10+arr[i];
			sum2=sum2*10+arr[3-i];
		}
		sum3 = sum2-sum1;
		printf("%04d - %04d = %04d",sum2,sum1,sum3);
	}
	while(sum3!=6174){
		sum1=0;sum2=0,i=0;
		while(i<4){
		arr[i] = sum3%10;
		sum3/=10;
		i++;
		}
		sort(arr,arr+4);
		for(i=0;i<4;++i){
			sum1=sum1*10+arr[i];
			sum2=sum2*10+arr[3-i];
		}
		sum3 = sum2-sum1;
		printf("%04d - %04d = %04d",sum2,sum1,sum3);
		if(sum3==0 || sum3==6174)break;
		printf("\n");
	}
} 
