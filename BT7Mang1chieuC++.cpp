//tim so nho nhat trong mang
#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,a[n];
	cout << "Nhap So Luong Phan Tu : ";
	cin >> n;
	for (int i = 0 ; i < n ; i++)
	{
		cout << "Nhap Gia Tri Phan Tu a[" << i << "] : ";
		cin >> a[i];
	}
	int  min;
	min = a[0];
	
	for ( int i = 1 ; i < n ; i++ )
	{
		if ( a[i] < min )
		{
			min = a[i];
		}
	}
	cout << "So nho nhat la : "<< min ; 
	



	return 0;
}

