#include<bits/stdc++.h>
using namespace std;

int main(){
	int num;cin>>num;long double sum = 0,a;
	for(int i = 0;i<num;++i){
		cin>>a;
		sum+=(a*(num-i)*(i+1));
	}
	printf("%.2llf",sum);
}
