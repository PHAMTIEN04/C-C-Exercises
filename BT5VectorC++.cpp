//Thay the cac phan tu am co trong mang bang gia tri 0 

#include <bits/stdc++.h>

using namespace std;
int main(){
	int n ; 
	cout << "Nhap so luong phan tu : ";
	cin >> n ;
	vector <int> vt ;
	for (int i = 0 ; i < n ; i++ )
	{
		cout <<"Nhap gia tri phan tu vt[" << i << "] : ";
		int a ;
		cin >> a;
		vt.push_back(a);
		
	}
	for (int i = 0 ; i < n ; i++)
	{
		
		cout << "Gia tri phan tu : "<< vt[i] << endl;
		
		
	}
	
	
	
	cout << "Gia cua phan tu sau khi thay the cac so am = 0 : ";
	for(int i = 0 ; i < n ; i++)
	{
		if (vt[i] < 0)
		{
			vt[i] = 0;	
		}
		cout << vt[i] << " ";
	}
	

	return 0;
}

