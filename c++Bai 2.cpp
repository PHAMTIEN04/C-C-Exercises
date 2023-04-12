#include<iostream>
#include<bits/stdc++.h>
#include<windows.h>
#include<stdio.h>
using namespace std;
int main(){
//Assignment operator : toan tu gan
//Toan tu toan hoc : + , - , * , / , % 
//Toan tu so sanh : >, >=, <, <=, ==, !=
//Toan tu logic : AND OR NOT
//AND : &&
//OR : ||
//NOT : !

	
	 int a,b;
	cout<<"Nhap a :"; cin>>a; cout<<"Nhap b :"; cin>>b;
	int tong = a + b ;
	int hieu = a - b ;
	int tich = a * b ;
	float thuong = 1.0*a / b;
	int du = a % b ;
	cout<<a<<" + "<<b <<"= "<<tong<<endl;
	cout<<a<<" - "<<b <<"= "<<hieu<<endl;
	cout<<a<<" * "<<b <<"= "<<tich<<endl;
	cout<<a<<" / "<<b <<"= "<<thuong<<endl;
	cout<<a<<" % "<<b <<"= "<<du<<endl;
	int i ,c,d; 
	cin>>c,d;
	i = !(c> d  )  &&  (c < d) ;//c=1 d = 2 : false and True => false(0)
	cout<< i ;
	
	
	return 0;
}

