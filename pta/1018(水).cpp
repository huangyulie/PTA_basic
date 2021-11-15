#include<stdio.h>
int main(){
	int num;scanf("%d\n",&num);int i,x1=0,x2=0,x3=0,y1=0,y2=0,y3=0;char a,b;int q[10]={0},p[10]={0};
	while(i<num){
		scanf("%c %c",&a,&b);
		getchar();
		if((a=='J'&&b=='B')||(a=='B'&&b=='C')||(a=='C'&&b=='J')){
			x1++;
			y3++;
			if(a=='B')q[0]++;
			if(a=='C')q[1]++;
			if(a=='J')q[2]++;
		}else if(a==b){
			x2++;
			y2++;
		}else{
			x3++;
			y1++;
			if(b=='B')p[0]++;
			if(b=='C')p[1]++;
			if(b=='J')p[2]++;
		}
		i++;
	}
	int max=-1,m;
	printf("%d %d %d\n%d %d %d\n",x1,x2,x3,y1,y2,y3);
	for(i=0;i<3;++i){
		if(q[i]>max){
			 max = q[i];
			 m=i;
		}
	}
	if(m==0)printf("B");
	if(m==1)printf("C");
	if(m==2)printf("J");
	max = -1;
	for(i=0;i<3;++i){
		if(p[i]>max){
			 max = p[i];
			 m=i;
		}
	}
	if(m==0)printf(" B");
	if(m==1)printf(" C");
	if(m==2)printf(" J");
}
