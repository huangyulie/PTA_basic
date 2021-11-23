#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){
	string a,b;cin>>a>>b;
	int arr[100]={0},i;
	for(i=0;i<b.size();++i){
		if(b[i]>='0' && b[i]<='9'){
			arr[(b[i]-'0')]++;
		}else if(b[i]>='a' && b[i]<='z'){
			arr[(b[i]-87)]++;
		}else{
			arr[(b[i]-29)]++;
		}
	}
	int sum = 0;
	for(i=0;i<a.size();i++){
		if(a[i]>='0' && a[i]<='9'){
			if(arr[(a[i]-'0')]==0){
				sum+=1;
			}else{
				arr[(a[i]-'0')]--;
			}
		}else if(a[i]>='a' && a[i]<='z'){
			if(arr[(a[i]-87)]==0){
				sum+=1;
			}else{
				arr[(a[i]-87)]--;
			}
//			arr[(a[i]-87)]--;
		}else{
			if(arr[(a[i]-29)]==0){
				sum+=1;
			}else{
				arr[(a[i]-29)]--;
			}
//			arr[(a[i]-29)]--;
		}
	}
//	printf("%d\n",sum);
 	int sum1 = 0;
	for(i=0;i<100;++i){
		sum1+=arr[i];
//		printf("%d ",arr[i]);
	}
	if(sum1!=0){
		printf("No %d",sum1);
	}else{
		printf("Yes %d",sum);
	}
} 
