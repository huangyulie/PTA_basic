#include<bits/stdc++.h>
using namespace std;
int c[] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
int main(){
	string a = "10X98765432",id[111];
	int i,j,num;cin>>num;
	for(i=0;i<num;++i){
		cin>>id[i];
	}
	int sum,flag,flag1=1;
	for(j=0;j<num;++j){
		sum = 0;flag=0;flag1;
		for(i=0;i<17;++i){
			if(id[j][i]<='9' && id[j][i]>='0'){
				sum+=((id[j][i]-'0')*c[i]);
			}else{
				flag1 = 0;
				flag = 1;
				break; 
			}
		}
		if(flag==0){
			sum%=11;
			if(id[j][17]!=a[sum]){
				cout<<id[j]<<endl;
				flag1 = 0;
			}
		}else{
			cout<<id[j]<<endl;
		}
	}
	if(flag1){
		cout<<"All passed";
	}
}
