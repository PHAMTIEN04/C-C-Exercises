//KIEM TRA SO NGUYEN TO
/*So nguyen to la so tu nhien lon hon 1 
va chi chia het cho 1 va chinh no*/
#include <bits/stdc++.h>
#include <math.h>
#include <string.h>
using namespace std;
void snt()
{
	int n;
	cout << "Nhap N : ";
	cin >> n;
	int dem;
	dem = 0 ;
	if (n < 2 ){
		cout << n <<" khong phai la so nguyen so" ;
	
	}
	else {
		for(int i = 1 ; i <= n ; i ++)
		{
			if (n % i == 0 ){
				dem ++ ;
			}
		}
	
		if (dem == 2){
		cout << n << " la so nguyen to";
	}
	else{
		cout << n << " khong phai la so nguyen to ";
	
	}
	
	}

}


int main() {
	
	snt();
	
	
	

	
}

