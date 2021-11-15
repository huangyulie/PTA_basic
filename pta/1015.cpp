#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

struct NODE1{
	int id;
	int defen;
	int caifen;
	int all;
}NODE[99999],st[99999];

int cmp(NODE1 a,NODE1 b){
	if(a.all==b.all){
		if(a.defen==b.defen){
			if(a.caifen==b.caifen){
				return a.id<b.id;
			}
			return a.caifen>b.caifen;
		}
		return a.defen>b.defen;
	}
	return a.all>b.all;
}

int main(){
	int num,min,max;scanf("%d %d %d",&num,&min,&max);int i=0,count=0,j=0;
	while(i<num){
		scanf("%d %d %d",&(NODE[i].id),&(NODE[i].defen),&(NODE[i].caifen));i++;
	}
	for(i=0;i<num;++i){
		if(NODE[i].defen>=min && NODE[i].caifen>=min)count++;
	}
	printf("%d\n",count);
	for(i=0;i<num;++i){
		if(NODE[i].defen>=max && NODE[i].caifen>=max){
			NODE[i].all = NODE[i].caifen+NODE[i].defen;
			st[j].all = NODE[i].all;
			st[j].caifen = NODE[i].caifen;
			st[j].defen = NODE[i].defen;
			st[j].id = NODE[i].id;
			j++;
		}
	}
	sort(st,st+j,cmp);
	for(i=0;i<j;++i){
		printf("%d %d %d\n",st[i].id,st[i].defen,st[i].caifen);
	}
	j=0;
	for(i=0;i<num;++i){
		if(NODE[i].defen>=max && NODE[i].caifen>=min && NODE[i].caifen<max){
			NODE[i].all = NODE[i].caifen+NODE[i].defen;
			st[j].all = NODE[i].all;
			st[j].caifen = NODE[i].caifen;
			st[j].defen = NODE[i].defen;
			st[j].id = NODE[i].id;
			j++;
		}
	}
	sort(st,st+j,cmp);
	for(i=0;i<j;++i){
		printf("%d %d %d\n",st[i].id,st[i].defen,st[i].caifen);
	}
	
	j=0;
	for(i=0;i<num;++i){
		if(NODE[i].defen>=min && NODE[i].defen<max && NODE[i].caifen>=min && NODE[i].caifen<max && NODE[i].defen>=NODE[i].caifen){
			NODE[i].all = NODE[i].caifen+NODE[i].defen;
			st[j].all = NODE[i].all;
			st[j].caifen = NODE[i].caifen;
			st[j].defen = NODE[i].defen;
			st[j].id = NODE[i].id;
			j++;
		}
	}
	sort(st,st+j,cmp);
	for(i=0;i<j;++i){
		printf("%d %d %d\n",st[i].id,st[i].defen,st[i].caifen);
	}
	
	j=0;
	for(i=0;i<num;++i){
		if(NODE[i].defen>=min && NODE[i].defen<max && NODE[i].caifen>=min && NODE[i].defen<NODE[i].caifen){
			NODE[i].all = NODE[i].caifen+NODE[i].defen;
			st[j].all = NODE[i].all;
			st[j].caifen = NODE[i].caifen;
			st[j].defen = NODE[i].defen;
			st[j].id = NODE[i].id;
			j++;
		}
	}
	sort(st,st+j,cmp);
	for(i=0;i<j;++i){
		printf("%d %d %d\n",st[i].id,st[i].defen,st[i].caifen);
	}
	
} 
