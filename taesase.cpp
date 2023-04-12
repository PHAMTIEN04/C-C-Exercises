#include <bits/stdc++.h>

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
	
	for (int i = 0 ; i < n ; i++)
	{
		if (a[i]<0)
		{
			for (int j = i ; j < n ; j++)
			{
				a[j] = a[j+1];
		
			 } 
	
		n--;
		}
	
	
	}
	for (int i = 0 ; i < n ; i++)
	{
		cout << "Gia tri phan tu duong : "<< a[i]<< endl;
	}
	return 0;
}

