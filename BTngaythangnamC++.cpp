///nhap vao ngay, thang, nam. Kiem tra xem ngay, thang, nam do co hop le
#include <bits/stdc++.h>

using namespace std;
int main(){
	
	char c = '/' ;
	int ngay,thang,nam;
	cout << "Nhap lan luot ngay, thang, nam : ";
	cin >> ngay >> c >> thang >> c >> nam ;
	if(nam < 10000){
//C�c th�ng c� 30 ng�y l�: Th�ng 4, 6, 9, 11.
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
	
//C�c th�ng c� 31 ng�y l�: Th�ng 1, 3, 5, 7, 8, 10, 12.
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
//Th�ng c� 28 (hoac 29) ng�y l� Th�ng 2.
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

