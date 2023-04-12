//Xoa cac phan tu am co trong mang
#include <bits/stdc++.h>

using namespace std;
int main(){
	int n ; 
	cout << "Nhap so luong phan tu : ";
	cin >> n ;
	vector <int> vt;
	for (int i = 0 ; i < n ; i++)
	{
		cout << "Nhap gia tri phan tu vt[" << i << "] : " ;
		int a; 
		cin >> a;
		vt.push_back(a);
	}
	
	
	for (int i = 0 ; i < n ; i++)
	{
		cout << "Gia tri phan tu : " << vt[i] << endl;
	}
	
	
	cout << "Gia tri phan tu sau khi xoa cac phan tu am : " ;
	for(int i = 0 ; i < n ; i++)
	{
		if (vt[i] > 0 )
		{
			cout << vt[i] << " ";
		}
	}
	return 0;
}

