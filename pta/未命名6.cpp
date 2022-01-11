#include<bits/stdc++.h>
using namespace std;

int a[1001]={0};

int main(){
	int num;cin>>num;int i,grade,sum;string str;
	for(i=0;i<num;++i){
		sum = 0;
		cin>>str>>grade;
		for(int j = 0;str[j]!='-';++j){
			sum=sum*10+(str[j]-'0');
		}
		a[sum]+=grade;
	}
	int max = 0,queue;
	for(int i = 0;i<1001;++i){
		if(a[i]>max){
			max = a[i];
			queue = i;
		}
	}
	cout<<queue<<" "<<max<<endl;
}
