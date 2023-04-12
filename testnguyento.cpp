#include <bits/stdc++.h>

using namespace std;
int main(){
	int n;
	cout << "Nhap N : ";
	cin >> n;
	int dem;
	dem = 0 ;
	if (n < 2 ){
		cout << n <<" khong phai la so nguyen so" ;
		return 0;
	}
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0) 
		dem ++ ;
		
	}

	if (dem == 2){
		cout << n << " la so nguyen to";
	}
	else{
		cout << n << " khong phai la so nguyen to ";
	
	}
		
	
	



	return 0;
}

