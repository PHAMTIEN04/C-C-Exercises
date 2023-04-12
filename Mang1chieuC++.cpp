#include <bits/stdc++.h>

using namespace std;
bool nt(int n)
{
	
	
	int dem ;
	dem = 0 ;
	if (n < 2 )
	{
		cout << "Loi Roi Ban Oi" ;
		return false ;
	}
	for (int i = 1 ; i <= n ; i++ )
		{
			if (n%i == 0)
			{
				dem++;
			}
		}
	if (dem == 2)
	{
	cout << n ;
	}

	}
	
	

int main(int i ){
	int n;
	cin >> n ; 
	int a[n];
	for (int i = 0 ; i < n ; i++)
	{		
		cin>> a[i];// Nhap gia cho phan tu o chi so i
	}
	for (int i = 0 ; i < n ; i++)
	{
	
		
		}
		nt(i);
		
		
		}
		
	
	
