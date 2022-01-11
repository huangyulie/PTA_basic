#include<bits/stdc++.h>
using namespace std;

int a[10010] = {0};

int find(int l,int r,int num,int count){
	int i=l;int j=r;
	if(l>r){
		printf("%d\n",count);
		return count;
	}
	int m = (l+r)/2;
	if(a[m]>num){
		count++;
	}
	find(l,m-1,num,count);
	find(m+1,r,num,count);
	
}

int main(){
	int num,day,count;cin>>num;
	for(int i=0;i<num;++i){
		cin>>a[i];
	}
	int max;
	for(int i = 1;i<=num;++i){
		count = find(0,num-1,i,0);
		if(count >= i){
			max = i;
		}else{
			break;
		}
	}
	cout<<max;
}

#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int a[1000001];
bool cmp(int a,int b){
    return a>b;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    sort(a+1,a+n+1,cmp);
    int ans = 0;
    int p = 1;
    while(ans<=n&&a[p]>p){
        ans++;
        p++;
    }
    printf("%d",ans);
    return 0;
}

