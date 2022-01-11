#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

struct NODE{
	int a;
	int b;
}node[99999];

int cmp(NODE aa,NODE bb){
	return aa.b<bb.b;
}

int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		int i,sum,value,max;
		for(i=0;i<n;++i){
			scanf("%d %d",&node[i].a,&node[i].b);
		}
		sort(node,node+n,cmp);
		sum = 0;
		max = node[0].a;
		value = node[0].b;
		for(i=1;i<n;++i){
			if(value == node[i].b){
				if(node[i].a>max){
					max = node[i].a;
				}
			}else{
				sum+=max;
			}
		}
		printf("%d\n",sum);
		for(i=0;i<n;++i){
			printf("%d %d ",node[i].a,node[i].b);
		}
	}
} 
