#include<bits/stdc++.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;

int main(){
	int Dich_Vu;
	cout << "Dich vu Facebook : \n";
	cout << "1.Tang Follow Facebook (11d/1)\n";
	Sleep(4000);
	cout << "2.Tang Like Facebook (4d/1)\n";
	Sleep(4000);
	cout << "3.Tang Follow Twitter (62d/1)\n";
	Sleep(4000);
	cout << "Chon : "; cin>> Dich_Vu;
	system("cls");
	
	
	int a,b,c,Follow_FB,Like_FB,Follow_Twitter,Tong_Dich_Vu ;
	Follow_FB = a * 11 ;
	Like_FB = b * 4 ;
	Follow_Twitter = c * 62;
	Tong_Dich_Vu = Follow_FB + Like_FB + Follow_Twitter ;


	// cout<< " Nhap So Like Facebook Ban Muon Mua : "; cin >> b ; Sleep(300); cout<<" So Like Facebook Can Tang : "<<b<<" Like\n";
	//cout << " Nhap So Follow Twitter Ban Muon Mua : "; cin >> c ; Sleep(300);  cout<<" So Follow Twitter Can Tang : "<<c<<" Follow\n";
	//system("cls");
	switch( Dich_Vu == 1 || Dich_Vu == 2 || Dich_Vu == 3){
	case 1 :
	cout<< " Nhap So Follow Facebook Ban Muon Mua : "; cin >> a ; Sleep(300); cout<<" So Follow Facebook Can Tang : "<<a<<" Follow\n";
	cout <<	"Tong so tien Follow Fb la : "<<Follow_FB<<" VND\n";
	break;
	case 2 : 
	cout << "Tong so tien Like Fb la : "<<Like_FB<<" VND\n";
	break;
	case 3 : 
	cout << "Tong so tien Follow Twitter la : "<<Follow_Twitter<<" VND\n";
	break;
	default :
	cout <<"Xin Vui Long Thu Lai Sau ";
	
	}
//	cout<<"Tong all Dich Vu cua ban : " <<Tong_Dich_Vu<<" VND\n";
	
	

	
	return 0;
}

