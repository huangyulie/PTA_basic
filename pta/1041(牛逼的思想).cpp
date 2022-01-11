#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
	string str;cin>>str;int p=0,a=0,t=0,sum=0;
	for(int i = 0;i < str.size(); ++i){
		if(str[i]=='T'){
			t++;
		}
	}
	for(int i = 0;i < str.size();++i){
		if(str[i]=='P') p++;
		if(str[i]=='T') t--;
		if(str[i]=='A'){
			sum+=((p*t)%1000000007);
			sum%=1000000007;
		}
	} 
	cout<<sum;
} 
