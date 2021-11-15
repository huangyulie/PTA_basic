#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

struct NODE{
	double a;
	double b;
	double c;
}arr[1001]; 

double cmp(NODE x,NODE y){
	return x.c>y.c;
}

int main(){
	int num,max;scanf("%d %d",&num,&max);int i,sum=0;double result=0;
	for(i=0;i<num;++i){
		scanf("%lf",&arr[i].a);
	}
	for(i=0;i<num;++i){
		scanf("%lf",&arr[i].b);
	}
	for(i=0;i<num;++i){
		arr[i].c = arr[i].b/arr[i].a;
	}
	sort(arr,arr+num,cmp);
	for(i=0;i<num;++i){
		if(max!=0){
			if(max-arr[i].a>=0){
				result+=arr[i].b;
				max=max-arr[i].a;
			}else{
				result+=(arr[i].c*(max));
				max=0;
			}
		}
	}
	printf("%.2lf",result);
} 
