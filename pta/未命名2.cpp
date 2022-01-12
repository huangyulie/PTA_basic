#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
	string a,b;
	getline(cin,a);
	getline(cin,b);
	if(a.find(b)!=string::npos){
		cout<<"yes"<<endl;
	}else{
		cout<<"no"<<endl;
	}
} s
