#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
	int n,m,i,j;
	scanf("%d %d",&n,&m);
	int a[1001],b[1001],t,sum;
	for(i=0;i<m;++i){
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;++i){
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;++i){
		sum=0;
		for(j=0;j<m;++j){
			scanf("%d",&t);
			if(t==b[j]){
				sum+=a[j];
			}
		}
		printf("%d\n",sum);
	}
} 
