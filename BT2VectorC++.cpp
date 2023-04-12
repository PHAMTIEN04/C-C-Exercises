//Tim so lon nhat trong mang vua nhap


#include <bits/stdc++.h>
#define ll long long



using namespace std;
int main(){
	ll n ; 
	cout << "Nhap so luong phan tu : " ;
	cin >> n ;
	vector <ll> vt ;
	for (ll i = 0 ; i < n ; i++)
	{
		cout << "Nhap gia tri phan tu vt[" << i << "] : ";
		int a ;
		cin >>  a;
		vt.push_back(a);
	}
	
	ll max = vt[0] ;
	for (ll i = 0 ; i < n ; i++)
	{
		if (max < vt[i] )
		{
			max = vt[i];
		}
	}
	cout << "Gia tri lon nhat trong mang la : "<< max ;
	
	return 0;
}

