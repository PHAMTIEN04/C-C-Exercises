#include<bits/stdc++.h>
using namespace std;
 int main(){
 	int n;
	cin>>n; 
	cin.ignore(); 
 	string a;
	getline(cin,a);
	int x=a.length();
	if(n>x){
		n=n%x; 
	} 
	for(int i=n;i<x;i++){
		cout<<a[i]; 
	}
	for(int i=0;i<n;i++){
		cout<<a[i]; 
	} 
 } 
