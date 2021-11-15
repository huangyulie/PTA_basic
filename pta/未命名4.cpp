#include<stdio.h>
#include<math.h>
int main(){
	double x1,x2,num,sum1,sum2;//x1,x2是区间，num是近似值
	scanf("%lf %lf %lf",&x1,&x2,&num);
	double c;
	while(fabs(x1-x2)>=num){
		c = (x1+x2)/2;
		sum1 = 2*x1*x1*x1 - 4*x1*x1 + 3*x1 -6;
		sum2 = 2*c*c*c - 4*c*c + 3*c -6;
		if(sum2*sum1<0){
			x2 = c;
		}
		else{
			if(sum2==0){
				x1 = c;
				break;
			}
			else{
				x1 = c;
			}
		}
	}
	printf("%lf",x1);
} 
