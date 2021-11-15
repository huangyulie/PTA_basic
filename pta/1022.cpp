#include<stdio.h>
int main(){
    int arr[100];
    long long a,b,t,sum,c=0,i=0;scanf("%lld %lld %lld",&a,&b,&t);
    sum=a+b;
    if(sum==0)
        printf("0");
    while(sum){
        arr[i++] = sum%t;
        sum/=t;
        c++;
    }
    for(i=c-1;i>=0;--i){
        printf("%d",arr[i]);
    }
}
