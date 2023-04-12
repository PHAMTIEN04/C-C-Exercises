#include<iostream>
#include<windows.h>
#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main ()
{
	int i,a,pw;
	do{
		printf("HI... ! \n 1. Print Image \n Click :   ");
		scanf("%d", &pw);
		if(pw != 1)
		printf("ERROR \n");
	}
	while(pw!=1);
	printf("SUCCESS \n");
	Sleep(1000);
	system("cls");
	char j=177 , k=209;
	printf("\n");
	cout<<"\t\t\t\t\t\t\t\t\t\t\t\tloading...\n";
	cout<<"\t\t\t\t\t\t\t\t\t\t\t";
	for(int i=0;i<26;i++)
	{
		cout<<j;
	}
	cout<<"\r";
	cout<<"\t\t\t\t\t\t\t\t\t\t\t";
	for(int i=0;i<26;i++)
	{
		cout<<k;
		Sleep(100);
	}
	printf("\n");
	Sleep(1000);
	string line;
	getline(cin,line);
	ifstream file("C:\\file.txt");
	while(!file.eof())
	{
	getline(file,line);
	cout<<line<<endl;;
	Sleep(100);
	}
	}	
	
