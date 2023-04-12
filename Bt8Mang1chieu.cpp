#include <bits/stdc++.h>

using namespace std;
bool laSoNguyenTo1(int n)
{
    // Neu n < 2 thi khong phai la SNT
    if (n < 2){
        return false;
    }       
     
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }   
    }
     
    return true;
}

int main(){
	int n;
	cout << "Nhap so luong phan tu : ";
	cin >> n;
	int a[n];
	for (int i = 0 ; i < n; i++)
	{
		cout <<"Nhap gia tri phan tu a["<<i << "] : ";
		cin >> a[i];
	}

	for ( int  i = 0 ; i < n ; i++ )
	{

		if(laSoNguyenTo1(a[i]))
		{
			cout << a[i];
		}
	
		
	}
	


//	return 0;
}

