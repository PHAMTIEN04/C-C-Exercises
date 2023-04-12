//Tinh trung binh cong cac so le o vi tri chan

#include <bits/stdc++.h>

using namespace std;
int main(){
	int n ;
	cout << "Nhap so luong phan tu : ";
	cin >> n ;
	vector <int> vt;
	for (int i = 0 ; i < n ; i++ )
	{
		cout << "Nhap gia tri phan tu vt["<<i << "] : ";
		int a ;
		cin >> a;
		vt.push_back(a);
		
		
		
	}
	int element = 0;
	
	
	for (int i = 0 ; i < vt.size() ; i++)
{
		if(vt[i] % 2 == 1 && i  % 2 == 0 )
		{
			
			
			element += vt[i];
	}
	
}
	float average;
	average = (float)element / 3;
	cout << "Trung binh cong : " << fixed<< setprecision(2)<<average;



	return 0;
}

