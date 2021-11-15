#include<bits/stdc++.h>
using namespace std;
int main(){
	int num,dis;scanf("%d %d",&num,&dis);int a[10000]={0},i;
	for(i=0;i<num;++i){
		scanf("%d",&a[i]);
	}
	dis = dis%num;
	for(i=num-1;i>=0;--i){
		if(dis==0)
		break;
		a[i+dis] = a[i];
	}	
	for(i=0;i<dis;++i){
		if(dis==0)
		break;
		a[i] =  a[i+num];
	}

	for(i=0;i<num-1;++i){
		printf("%d ",a[i]);
	}
    printf("%d",a[num-1]);
}
