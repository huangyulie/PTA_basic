#include<bits/stdc++.h>
using namespace std;
bool Right(char *a){
	int len = strlen(a),ps = 0,ts = 0,pn = 0,tn = 0;
	for(int j = 0;j<len;++j){
		if(a[j]!='P' && a[j]!='A' && a[j]!='T'){
			return false;
		}
		if(a[j]=='P'){
			ps = j;
			pn++;
		}
		if(a[j]=='T'){
			ts = j;
			tn++;
		}
	}
	if(pn!=1 || tn!=1 || (ps+1)==ts){
		return false;
	}
	int num1 = ps;
	int num2 = (ts-ps-1);
	int num3 = (len-ts-1);
	if(num1*num2==num3){
		return true;
	}
	else{
		return false;
	}
}
int main(){
	int num;scanf("%d",&num);int i = 0;char a[1000];
	while(i++<num){
		scanf("%s",&a);
		if(Right(a)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}
