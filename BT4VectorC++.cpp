//Hien thi cac so nguyen to co trong mang


#include <bits/stdc++.h>
bool checksnt(int n)
{
	if(n < 2)
	{
		return false;
	}
	for (int i = 2 ; i <= sqrt(n) ; i++)
	{	
		if (n % i == 0)
		{
			return false;
		}
		
	}
	return true ;
}

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
	
	for ( int i = 0 ; i < n ; i++)
	{
		if (checksnt(vt[i]))
		{
			cout <<"So nguyen to trong mang : " << vt[i] << endl;
		}
		
		
	}

	return 0;
	
}

