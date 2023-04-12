//Xoa vi tri phan tu trong mang 
//Nhap Mang 
//Xuat Mang
//Tim vi tri xoa phan tu 
#include <bits/stdc++.h>
using namespace std;
vector <int>  nhap_mang(int n )
{
	
	vector<int> vc; 
	for (int i = 0 ; i < n; i++ )
	{
		cout << "Nhap gia tri phan tu vc["<< i << "] : ";
		int a;
		cin >> a;
		vc.push_back(a);
	}
	return vc;
	
}
void xuat_mang (vector<int> vc )
{
	cout << "Gia tri phan tu : ";
	for (int i = 0 ; i < vc.size() ; i++ )
	{
		cout<<vc[i]<<" ";
	}
	cout <<"\n";
	
}
vector<int>  vt_xoa_phan_tu (vector <int> vc )
{
	int  k ; 
	cin >> k ;
	for (int i = 0 ; i < vc.size() ; i++ )
	{
		if (vc[i] == k )
		{
			vc.erase(vc.begin() + i);
		}
		
	
		
	}

	return vc;

}
int main(){
	int n ; 
	vector <int> vc;
	cout << "Nhap so luong phan tu : "; 
	cin >> n ;
	vc = nhap_mang(n);
	
//	cout << "Gia tri phan tu : " << endl;
	xuat_mang(vc);
	cout << "Phan tu muon xoa : ";
	vc = vt_xoa_phan_tu(vc);
	xuat_mang(vc);

	
}

