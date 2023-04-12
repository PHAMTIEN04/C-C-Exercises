//Sap xep mang theo thu tu tang dan
#include <bits/stdc++.h>

using namespace std;
int main(){
	int n ; 
	cout << "Nhap so luong phan tu : ";
	cin >> n ;
	int a[n];
	for (int i = 0 ; i < n ; i++ )
	{
		cout << "Nhap gia tri phan tu a[" << i<<"] : ";
		cin >> a[i];
	}
	int tangdan ;
	tangdan = 0 ;
	for (int i = 0 ; i < n-1 ; i++ )
	{
		for (int j = 0 ; j < n ; j++)
		{
				if (a[i] > a[j+1] )
		{
			 tangdan = a[i];
                a[i] = a[j+1];
                a[j+1] = tangdan;    
		}
		}
		
			
			
			
	

	}


	for (int i = 0 ; i < n ; i++)
	{
		cout << a[i];
	}
	

	return 0;
}

