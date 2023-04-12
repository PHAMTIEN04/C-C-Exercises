#include <bits/stdc++.h>
#include <stdlib.h>
#include <windows.h>
using namespace std;
void min(int a , int b , int c)
{	
	int min ;
	cout << "Tim so nho nhat trong nhung so sau : "; cin >> a >> b >> c ; 
	min = a;
	if (min > b )
	{
		min = b ;
	}
	if (min > c )
	{		
		min = c ;
	}

	cout << "So nho nhat la : " << min << endl ;
	Sleep(1000);
	system("cls");
}

void max(int a , int b , int c)
{
	int max ;
	cout << "Tim so lon nhat trong nhung so sau : "; cin >> a >> b >> c ; 
	max = a;

	if (max < b )
	{
		max = b ;
	}
	if (max < c )
	{
		
		max = c ;
	}

	cout << "So lon nhat la : " << max << endl ;
}

int main(){
	int a,b,c ;
	min(a,b,c);
	max(a,b,c);


	return 0;
}

