#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
	int num;scanf("%d",&num);int i=1,b[10001],j,flag,count=0,count1=0;
	for(i=3;i<=num;++i){
		flag = 0;
		for(j=2;j<sqrt(i)+1;++j){
			if(i%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			b[count] = i;
			count++;
		}
	}
	count1=0;
	for(i=0;i<count;++i){
		if(b[i+1]-b[i]==2){
			count1++;
		}
	}
	printf("%d",count1);
}
