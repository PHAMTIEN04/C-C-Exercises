#include <bits/stdc++.h>
using namespace std;

class NHANVIEN{
	protected:
		string hoten;
		int ngaysinh;
		float lcb;
	public:
		NHANVIEN(string ht = "", int ns = 0,float lcbb = 0) : hoten(ht),ngaysinh(ns),lcb(lcbb){};
		
		virtual void xuat(){
			cout << "Ho ten: " << this->hoten<< endl;
			cout << "Ngay sinh: " << this->ngaysinh<<endl;
			cout << "Luong co ban: " << this-> lcb << endl;
		}
		string gethoten(){
			return this->hoten;
		}
		virtual float TinhLuong(){
			return 0;
		}
};

class NVVP:public NHANVIEN{
	protected:
		int snlv;
		float trocap;
	public:
		NVVP(int snlvv=0 , float tc = 0,string ht = "", int ns = 0,float lcbb = 0): snlv(snlvv),trocap(tc),NHANVIEN(ht,ns,lcbb){};
		float TinhLuong(){
			return this->lcb + (this->snlv * 200.000) + this->trocap;
		}
		void xuat(){
			cout << "**Nhan Vien Van Phong**\n";
			NHANVIEN::xuat();
			cout << "So ngay lam viec: "<< this->snlv<< endl;
			cout << "Tro cap: "<< this->trocap << endl;
			cout << "Tien luong: " << this->TinhLuong()<<endl;
		}
};

class NVSX:public NHANVIEN{
	protected:
		int ssp;
	public:
		NVSX(int sspp=0 , string ht = "", int ns = 0,float lcbb = 0): ssp(sspp),NHANVIEN(ht,ns,lcbb){};
		float TinhLuong(){
			return this->lcb + (this->ssp * 2.000);
		}
		void xuat(){
			cout << "**Nhan Vien San Xuat**\n";
			NHANVIEN::xuat();
			cout << "So san pham: "<< this->ssp<< endl;
			cout << "Tien luong: " << this->TinhLuong() << endl;
		}
};

class NVQL:public NHANVIEN{
	protected:
		 float thuong,hscv;
	public:
		NVQL(float thuongg = 0 , float hscvv = 0,string ht = "", int ns = 0,float lcbb = 0): thuong(thuongg),hscv(hscvv),NHANVIEN(ht,ns,lcbb){};
		float TinhLuong(){
			return (this->lcb * this->hscv) + this->thuong;
		}
		void xuat(){
			cout << "**Nhan Vien Quan Ly**\n";
			NHANVIEN::xuat();
			cout << "Thuong: "<< this->thuong<< endl;
			cout << "He so chuc vu: "<< this->hscv << endl;
			cout << "Tien luong: " << this->TinhLuong()<<endl;
		}
};
class QLNhanVien{
	NHANVIEN * nv[100];
	int n;
	public:
		QLNhanVien(){
			this->n=0;
		}
		void nhap(){
			int chon;
			do{
				cout << "**MENU**\n";
				cout << "1. Nhap Thong Tin Nhan Vien Van Phong\n";
				cout << "2. Nhap Thong Tin Nhan Vien San Xuat\n";
				cout << "3. Nhap Thong Tin Nhan Vien Quan Ly\n";
				cout << "4. Thoat\n";
				cin >> chon;
				switch(chon){
					case 1:{
						string ht;
						int ngaysinh,snlv;
						float lcb,trocap;
						cin.ignore();
						cout << "Ho ten: " ; getline(cin,ht);
						cout << "Nam sinh: "; cin>>ngaysinh; cin.ignore() ;
						cout << "So ngay lam viec: "; cin >> snlv; cin.ignore();
						cout << "Luong co ban: "; cin>>lcb; cin.ignore();
						cout << "Tro cap: "; cin >> trocap; cin.ignore();
						nv[n] = new NVVP(snlv,trocap,ht,ngaysinh,lcb);
						n++; 	
						
						break;
					}

					case 2:{
						string ht;
						int ngaysinh,ssp;
						float lcb;
						cin.ignore();
						cout << "Ho ten: " ; getline(cin,ht);
						cout << "Nam sinh: "; cin>>ngaysinh; cin.ignore() ;
						cout << "So san pham: "; cin >> ssp; cin.ignore();
						cout << "Luong co ban: "; cin>>lcb; cin.ignore();
						nv[n] = new NVSX(ssp,ht,ngaysinh,lcb);
						n++; 
						break;
					}

					case 3:{
						string ht;
						int ngaysinh;
						float lcb,thuong,hscv;
						cin.ignore();
						cout << "Ho ten: " ; getline(cin,ht);
						cout << "Nam sinh: "; cin>>ngaysinh; cin.ignore() ;
						cout << "Thuong: "; cin >> thuong; cin.ignore();
						cout << "Luong co ban: "; cin>>lcb; cin.ignore();
						cout << "He so chuc vu: "; cin >> hscv; cin.ignore();
						nv[n] = new NVQL(thuong,hscv,ht,ngaysinh,lcb);
						n++; 
						break;
					}

					case 4:{
						break;
					}
				}
			}while(chon == 1 || chon == 2 || chon == 3);
		}
		void xuat(){
			for(int i = 0 ; i < n;i++){
				cout << "Nhan Vien [" << i + 1 << "]"<<endl;
				nv[i]->xuat();
				cout << endl;
			}
		}
		float tongLuong(){
			float tongluong=0;
			for(int i = 0 ; i < n ;i++){
				tongluong += nv[i]->TinhLuong();
			}
			return tongluong;
		}
		void timHoTen(string ht){
			cout << "Dang Tim Kiem Nhan Vien Co Ho Ten : "<< ht <<endl;
			bool check = false;
			for(int i = 0;i< n;i++){
				if(nv[i]->gethoten() == ht){
					nv[i]->xuat();
					check = true;
				}
			}
			if(check = false){
				cout << "Khong Tim Thay" << endl;
			}
		}
};
int main(){
	QLNhanVien d;
	d.nhap();
	d.xuat();
	cout<<"Tong luong nhan vien="<<d.tongLuong()<<endl;
	d.timHoTen("Tien");
}
