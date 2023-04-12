//Xoa vi tri phan tu trong mang 
#include <iostream>
#include <vector>
using namespace std ;
vector<int>  nhapmang (int n)
{
	vector<int> vc;
	for ( int i= 0 ; i <n ; i++)
	{
		cout << "Nhap gia tri phan tu  a["<< i << "] : ";
		int a;
		cin >> a;
		vc.push_back(a);	
	}
	return vc;
}

void xuatmang (vector<int> vc )
{
	
	cout << "Gia tri : ";
	for (int i =0 ; i <vc.size() ; i++)
	{
		cout <<  vc[i] << " ";
		
	}
	
	
	
}
vector<int> vt_mang (vector<int> vc) 
{	
	 int k = 0;
	 cout << "\nPhan tu muon xoa : ";
	 cin >> k;
	 for (int i = 0 ; i < vc.size() ; i++)
	 { 
	 	 	if(vc[i]==k){
	 	 		vc.erase(vc.begin() + i );
	 	 	} 
	 }
    return vc;
}
int main(int argc, char *argv[])
{
	int n;
	cout << "Nhap so luong phan tu : ";
	cin >> n;
	vector<int> vc;
	vc = nhapmang(n);
//	for ( int i= 0 ; i < vc.size() ; i++)
//	{
//		cout << "Nhap gia tri phan tu  a["<< i << "] : ";
//		int a;
//		cin >> a;
//		vc.push_back(a);	
//	}
	xuatmang(vc);
	vc = vt_mang(vc);
	xuatmang(vc);

	return 0;
}

