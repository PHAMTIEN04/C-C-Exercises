#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,a[n];
	cout << "Nhap vao so luong phan tu trong mang :";
	cin >> n ;
	int tong,tich;
	tong = 0;
	tich = 1 ;
	float tb;
	for (int i = 0 ; i < n; i++)
	{
		cout << "Nhap vao gia tri phan tu trong mang a[" << i << "] :";
		cin >> a[i];
	}
	for (int i = 0 ; i < n; i++)
	{
		tong += a[i];
		tich *= a[i];
	}
	tb = tong/n;

	cout <<"Tong cua mang la: "<<tong<<endl;
	cout <<"Tich cua mang la: "<<tich<<endl;
	cout <<"Trung binh cua mang la: "<<tb;
	



	return 0;
}

