#include <iostream>

using namespace std;
struct phanso
{ 
	int tu;
	int mau;
	
}ps1,ps2,ps3;
void nhapps(phanso &ps){
	cout << "Nhap Tu :";
	cin >> ps.tu;
	cout << "Nhap Mau:";
	cin >> ps.mau;
}
void inps(phanso &ps){
	cout << "Tu: "<< ps.tu << endl;
	cout << "Mau: "<<ps.mau << endl;
}
void tong2ps( phanso &ps1 , phanso &ps2){
	float tu_phanso = (ps1.tu * ps2.mau) + (ps2.tu * ps1.mau);
	float mau_phanso = (ps1.mau*ps2.mau);
	cout << "tong 2 phan so :" << tu_phanso / mau_phanso ;
}
# rut gon phan so
void rutgonps(phanso &ps1){
	int sochiahet = 0;
	for (int i = 1 ; i < ps1.tu && i < ps1.mau ; i++){
		if (ps1.tu % i == 0 && ps1.mau % i == 0){
			sochiahet = i;
		}
	}
}
int main(){
	cout << "Phan So 1" << endl;
	nhapps(ps1);
	cout << "Phan So 2" << endl;
	nhapps(ps2);
	tong2ps(ps1,ps2);

	
	
	
	
	
	
	
	
	
	
	
	
	
}


//Khai bao kieu cau truc (struct)

//	Cú pháp
//	struct <ten kieu cau truc>
//	{
//		<kieu du lieu> <ten thanh phan 1>;
//		...
//		<kieu du lieu> <ten thanh phan n>;
//	};
//
//	Vi du
//	struct SDiem2D
//	{
//		int m_nx;
//		int m_ny;
//	}
