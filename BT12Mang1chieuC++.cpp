//Xoa phan tu co gia tri am trong mang

#include <bits/stdc++.h>
#include <windows.h>
#include <conio.h>
using namespace std;
int main(){

	int n ; 
	cout << "Nhap so luong phan tu : ";
	cin >> n ;
	int a[n];
	for (int i = 0 ; i < n ; i++ ) 
	{
		cout << "Nhap gia tri phan tu a["<< i << "] : ";
		cin >> a[i];
	}
	Sleep(1000);
	system("cls");
	for (int i = 0 ; i < n ; i++)
	{
		
		cout << "Gia tri cua phan tu : "<<a[i]<<endl;
	}
	Sleep(1500);
	system("cls");

	
	for (int i = 0 ; i < n ; i++)
	{
		if (a [i] > 0)
		{
			cout <<	"Gia tri cua phan tu duong : " <<a[i]<< endl;
		}
		
	}

	getch();

	return 0;
}

