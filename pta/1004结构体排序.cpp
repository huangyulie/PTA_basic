#include<bits/stdc++.h>
using namespace std;
struct NODE{
	int data;
	char id[100];
	char name[100];
}node[1000];
bool cmp(NODE a,NODE b){
	return a.data>b.data;
}
int main(){
	int num;scanf("%d",&num);int i = 0;
	while(i<num){
		scanf("%s %s %d",&node[i].name,&node[i].id,&node[i].data);i++;
	}
	sort(node,node+num,cmp);
	printf("%s %s\n%s %s",node[0].name,node[0].id,node[num-1].name,node[num-1].id);
} 
