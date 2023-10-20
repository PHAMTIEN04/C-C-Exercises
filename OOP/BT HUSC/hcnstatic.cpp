#include <iostream>
using namespace std;
class HinhChuNhat{
//thuoc tinh
	float dai,rong;
	static int dem;
//phuong thuc hoac ham
public:
	HinhChuNhat(){
		dai=rong=0;
		dem++;
	}
	HinhChuNhat(float d,float r){
		dai=d;rong=r;
		dem++;
	}	
	float tinhDienTich();
	void hienThi();
	float getDai();  //nguyen mau cua ham
	float getRong(); 
	static void inSoHinhChuNhat(){
		cout<<"co "<<dem<<" HCN duoc khoi tao"<<endl;
	}
};
int HinhChuNhat::dem=0;
float HinhChuNhat::getDai(){
	return dai;
}
float HinhChuNhat::getRong(){
	return rong;
}
float HinhChuNhat::tinhDienTich(){
	return dai*rong;	
}
void HinhChuNhat::hienThi(){
	cout<<"Hinh chu nhat dai="<<dai<<" va rong="<<rong<<endl;
	cout<<"Dien tich la "<<tinhDienTich()<<endl;
}
int main(){
	HinhChuNhat hcn(15,4);
	hcn.hienThi();
	HinhChuNhat::inSoHinhChuNhat();
	HinhChuNhat hcn1(18,14);
	hcn.hienThi();
	HinhChuNhat::inSoHinhChuNhat();	
}
