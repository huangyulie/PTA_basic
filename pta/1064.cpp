#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int str[100] = {0},count = 0,count1 = 1;
    int num,a,sum,b;cin>>num;
    for(int i = 0;i<num;++i){
        sum = 0;
        cin>>a;
        while(a){
            b = a%10;
            sum+=b;
            a = a/10;
        }
        if(!str[sum]){
            str[sum] = 1;
            count++;
        }
//        cout<<sum<<endl;
    }
    cout<<count<<endl;
    for(int i = 0;i<100;++i){
        if((count1 == count)&&str[i]==1){
            cout<<i;
        }
        if((count1 != count)&&str[i]==1){
            count1++;
            cout<<i<<" ";
        }
    }
}
