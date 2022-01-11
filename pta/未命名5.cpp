#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int num[26] = {0};
string a = "abcdefghijklmnopqrstuvwxyz";

int main(){
	int max = 0,j;
    char str[1010];gets(str);
    for(int i = 0;i<strlen(str);++i){
        if(str[i]>='a'&&str[i]<='z')
            num[str[i]-97]++;
        if(str[i]>='A'&&str[i]<='Z'){
            num[str[i]-65]++;
        }
    }
    for(int i = 0;i<26;++i){
        if(num[i]>max){
        	max = num[i];
        	j = i;
		}
//		cout<<num[i]<<endl;
    }	
    cout<<a[j]<<" "<<max<<endl;
    return 0; 
}


