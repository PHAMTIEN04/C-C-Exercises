//tim so lon nhat trong mang
#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,a[n]; 
	cout << "Nhap so phan tu : " ;
	cin >> n ;
	for(int i = 0 ; i < n ; i++ )
	{ 
	 cout << "Nhap gia tri phan tu a["<< i << "] : ";
	 cin >> a[i];
	}
	int max ; 
	max = a[0];
	for( int i = 1 ; i < n ; i++)
	{
		if ( a[i] > max )
		{ 
			 max = a[i];
		}
	}
	cout << "So lon nhat la : "<< max ;

	return 0;
}

