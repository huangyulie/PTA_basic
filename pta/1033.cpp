#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	string a,b;
	getline(cin,a);
	getline(cin,b);
	for(int i = 0;i<b.size();++i){
		if(a.find('+')!=string::npos && isupper(b[i])){
			continue;
		}
		if(a.find(toupper(b[i]))!=string::npos){
			continue;
		}  
		cout<<b[i]; 
	} 
}
