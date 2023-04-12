//Sap xep mang da nhap theo thu tu tang dan
#include <bits/stdc++.h>

using namespace std;
int main(){
	int n ;
	cout << "Nhap so luong phan tu : ";
	cin >> n ; 
	vector <int> vt;
	for (int i = 0 ; i < n ; i++ )
	{
		cout << "Nhap gia tri phan tu vt[" << i << "] : " ;
			int a ; 
		cin >> a ;
			vt.push_back(a);
	}
	
	cout << "Gia tri phan tu : ";
	
	for (int i = 0 ; i < n ; i++)
	{
		cout << vt[i] << " ";
	}
	
	int td = 0;
	for (int i = 0 ; i < n-1 ; i++)
	{
		for (int j = i + 1 ; j < n ; j++ )
		{
			if (vt[i] > vt[j])
			{
				td = vt[i];
				vt[i] = vt[j];
				vt[j] = td;
			}
		}
	}
	
//sau khi da sap xep thu tu tang dan bang thuat toan hoan vi
	
	cout << "\nMang sap xep theo thu tu tang dan : " ;
	
	for (int i = 0 ; i < n ; i++)
	{
		cout <<vt[i] << " " ;
	}
	
	
	
	
	
	return 0;
	
}

