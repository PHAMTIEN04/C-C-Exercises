#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,a[n];
	cout << "Nhap So Luong Phan Tu : ";
	cin >> n ;
	for (int i = 0 ; i < n ; i++ )
	{
		cout << "Gia Tri Phan Tu a[" << i << "] :";
		cin >> a[i];
	}
	//Tao 2 bien min va max
	//Cho min = a[0] va max = a[0];
	int min,max;
	min = a[0];
	max = a[0];
	for (int i = 1 ; i < n ; i++ )
	{
		if(a[i] > max) max = a[i];
		if(a[i] < min) min = a[i];
	}
	cout <<"Gia tri lon nhat :" <<max<<endl;
	cout <<"Gia tri nho nhat :" <<min;

	return 0;
}

