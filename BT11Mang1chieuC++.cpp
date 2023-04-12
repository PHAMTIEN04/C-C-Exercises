//Thay the cac phan tu am trong mang co gia tri bang 0

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
	system ("cls");
	for (int i = 0 ; i < n ; i++)
	{
		if (a[i]<0)
		{
			a[i] = 0;
		}
		cout << "Gia tri tung phan tu la : "<<a[i]<< endl;
	}

	return 0;
}

