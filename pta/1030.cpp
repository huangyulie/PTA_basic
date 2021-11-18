#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
	long long num,max=1,temp,i,j,count=1;
    scanf("%lld %lld",&num,&temp);
    long long a[num];
	for(i=0;i<num;++i){
		scanf("%lld",&a[i]);
	}
	sort(a,a+num);
	for(i=0;i<num;++i){
		for(j=i+count;j<num;++j){
			if(a[i]*temp>=a[j]){
				count++;
			}else{
                break;
            }
		}
	}
	printf("%lld",count);
}
