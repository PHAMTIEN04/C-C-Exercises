///nhap vao ngay, thang, nam. Kiem tra xem ngay, thang, nam do co hop le
#include <bits/stdc++.h>

using namespace std;
int main(){
	
	char c = '/' ;
	int ngay,thang,nam;
	cout << "Nhap lan luot ngay, thang, nam : ";
	cin >> ngay >> c >> thang >> c >> nam ;
	if(nam < 10000){
//Các tháng có 30 ngày là: Tháng 4, 6, 9, 11.
	if (ngay < 31 )
	{
		for (int i = 0 ; i < 1 ; i++)
	{
	switch ( ngay && thang && nam)
	{
		
		
		case 4 || 6 || 9 || 11  :
			cout <<"Hop le : " ;
			cout << ngay << "/" << thang << "/" << nam ;
			break;
			
		}	
	}
	
//Các tháng có 31 ngày là: Tháng 1, 3, 5, 7, 8, 10, 12.
	}
	else if (ngay <=  31) {
		
			for (int i = 0 ; i < 1 ; i++)
	{
	switch ( ngay && thang && nam )
	{
		
		
		case 1 || 3 || 5 || 7 || 8 || 10 || 12 :
			cout <<"Hop le : " ;
			cout << ngay << "/" << thang << "/" << nam;
			break;		
		
		}	
	}
	
}
//Tháng có 28 (hoac 29) ngày là Tháng 2.
	else if (ngay < 29 || ngay < 30)
	{
		for (int i = 0 ; i < 1 ; i++)
	{
	switch ( ngay && thang && nam )
	{
		
		
		case 2 :
			cout <<"Hop le : " ;
			cout << ngay << "/" << thang << "/" << nam;
			break;		
		
		}	
	}
		
		
	}
	
	
	}
	
	return 0;
}

