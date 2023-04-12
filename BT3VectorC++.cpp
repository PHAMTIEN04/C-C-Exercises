//Tim vi tr cua so nho nhat trong mang 
#include <bits/stdc++.h>

using namespace std;
int main(){
	int n ; 
	cout << "Nhap so luong phan tu : ";
	cin >> n ;
	vector <int> vt ;
	for (int i = 0 ; i < n ; i++) 
	{
		cout << "Nhap gia tri phan tu vt[" << i << "] : ";
		int a; 
		cin >> a;
		vt.push_back(a);
		
		
		
	}
	
	
	int min = vt[0] ;
	int location_min = 0;
	for (int i = 0 ; i < n ; i++ )
	{
		if (min > vt[i])
		{
			min = vt[i];
			location_min += 1;
			
		}
	}
	for (int i = 0 ; i < 41 ; i++)
	{
		cout <<"-";
	}
	cout << "\n| So nho nhat trong mang : " << min << "\t\t|" << endl;
	cout << "| Vi tri so nho nhat trong mang : " << location_min<< "\t|" << endl;
		for (int i = 0 ; i < 41 ; i++)
	{
		cout <<"-";
	}

	return 0;
}

