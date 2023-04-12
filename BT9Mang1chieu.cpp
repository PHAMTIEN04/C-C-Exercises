#include <bits/stdc++.h>

using namespace std;
int main(){
	int n;
//	cout << "Nhap so luong phan tu : ";
	cin >> n ;
	int a[n] ;
	for (int i = 0 ; i < n ; i++)
	{ 
//		cout << "Nhap gia tri phan tu a["<<i<< "] : ";
		cin >> a[i];
	}
	int sum ;
	sum = 0;
	for (int i = 0 ; i < n ; i++)
	{
		sum += a[i];
		
	}
	cout << sum;
	return 0;
}

