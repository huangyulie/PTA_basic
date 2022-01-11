#include<bits/stdc++.h>
#include<string>

using namespace std;

struct node{
	string name;
	string bd;
	int y;
}node[100010];

int main(){
	string name[10010],bd[10010];
	int i,num,j,count=0,sum1,max=0,a,b,min=99999999;scanf("%d",&num);
	for(i=0;i<num;++i){
		cin>>node[i].name>>node[i].bd;
	}
	for(i=0;i<num;++i){
		sum1=0;
		for(j=0;j<10;++j){
			if(node[i].bd[j]!='/'){
			 	sum1 = sum1*10+node[i].bd[j]-'0';
			}
		}
		node[i].y=sum1;
		if(sum1<=20140906&&sum1>=18140906){
			count++;
			if(sum1>=max){
				a = i;
				max = sum1;
			}
			if(sum1<=min){
				b = i;
				min = sum1;
			}
		} 
		
	}
	if(count!=0)
		cout<<count<<" "<<node[b].name<<" "<<node[a].name<<endl;
		else
		cout<<count<<endl;
}
