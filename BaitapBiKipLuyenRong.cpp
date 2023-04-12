#include<iostream>
#include<bits/stdc++.h>
#include<windows.h>
#include<stdlib.h>
using namespace std;
int main() {
    int n,d=0;
    cout<<"Nhap n:"; cin>>n;
    for (int i=1;n>=(n-1)/2;i++) 
        d++;

    
    cout<<"Ket qua:" <<d;
}



