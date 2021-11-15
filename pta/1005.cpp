#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
	return a>b;
}
int main(){
	int num;scanf("%d",&num);int i = -1,a[1001],b[1001]={0},c[1001]={0},j,k;
	while(++i<num){
		scanf("%d",&a[i]);
	}
	int count,arr;
	for(i=0;i<num;++i){
		arr = a[i];
		count=0;
		while(arr!=1){
			if(arr%2==1){
				arr = (arr*3+1)/2;
				b[count] = arr;
				count++;
			}else{
				arr = arr/2;
				b[count] = arr;
				count++;
			}
		}
		for(j=0;j<count;++j){
			for(k=0;k<num;++k){
				if(b[j]==a[k]){
					c[k]=1;
				}
			}
		}
	}
	count=0;
	for(j=0;j<num;++j){
		if(c[j]==0){
			b[count] = a[j];
			count++;
		}
	}
	sort(b,b+count,cmp);
	for(j=0;j<count-1;++j){
		printf("%d ",b[j]);
	}
	printf("%d",b[j]);
} 
