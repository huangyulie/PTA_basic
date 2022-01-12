#include<bits/stdc++.h>
using namespace std;
int a[100000] = {0};
int main(){
    int num,b,c,max=0,j=1;cin>>num;
    for(int i = 0;i<num;++i){
        cin>>b>>c;
        a[b]+=c;
    }
    for(int i = 1;i<100000;++i){
        if(a[i]>max){
            max = a[i];
            j = i;
        }
    }
    cout<<j<<" "<<max<<endl;
    return 0;
}
