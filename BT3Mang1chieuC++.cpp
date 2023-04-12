#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,a[n];
	cout << "Nhap So Phan Tu : ";
	cin >> n;//5
//nhap vao so phan tu trong mang
	for (int i= 0 ; i < n ; i++)
	{
		cout <<"Gia tri phan tu a[" << i <<"] : ";
		cin >> a[i];//13524
	}
//nhap gia tri phan tu trong mang


//tao bien tang dan 
//cho bien tang dan = a[0]
	int tangdan;
	tangdan = a[1];
	for (int i = 0 ; i < n ; i++)
	{
		if(a[i] > tangdan)
		{
		
			
			cout << tangdan;	
			tangdan++;
		
		}
		if (a[i] < tangdan) {
			cout << a[i];
			tangdan++;
		}
	}
	return 0;
}

