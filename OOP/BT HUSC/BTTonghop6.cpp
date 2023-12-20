#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
class NhanVien{
	protected:
		string mnv,tnv,ntns,dc,nbdlv;
		double hsl;
	public:
		NhanVien(string mnv = "",string tnv ="",string ntns = "",string dc ="",double hsl =0,string nbdlv=""):mnv(mnv),tnv(tnv),ntns(ntns),dc(dc),hsl(hsl),nbdlv(nbdlv){};
		
		virtual long long TinhLuong() = 0;
		virtual void nhap(){
			cout << "Ma nhan vien: "; getline(cin,this->mnv);
			cout << "Ten nhan vien: "; getline(cin,this->tnv);	
			cout << "Ngay thang nam sinh: "; getline(cin,this->ntns);
			cout << "Dia chi: "; getline(cin,this->dc);
			cout << "He so luong: "; cin >> this->hsl; cin.ignore();
			cout << "Ngay bat dau lam viec: "; getline(cin,this->nbdlv);
		}
		virtual void xuat(){
			cout << "Ma nhan vien: "<<this->mnv<<endl;
			cout << "Ten nhan vien: "<<this->tnv<<endl;	
			cout << "Ngay thang nam sinh: "<<this->ntns<<endl;
			cout << "Dia chi: "<<this->dc<<endl;
			cout << "He so luong: "<<this->hsl<<endl; 
			cout << "Ngay bat dau lam viec: "<<this->nbdlv<<endl;			
		}
		
		virtual string getloai()=0;
		virtual int getn()=0;
	
};



class Programmer:public NhanVien{
	protected:
		long long lcb,ovt;
	public:

		void nhap(){
			NhanVien::nhap();
			cout << "Luong co ban: "; cin>> this->lcb; cin.ignore();
			cout << "Overtime: "; cin >> this->ovt; cin.ignore();
		}
		void xuat(){
			NhanVien::xuat();
			cout << "Luong co ban: "<< this->lcb<<endl;
			cout << "Overtime: "<<this->ovt<<endl;
		}
		long long TinhLuong(){
			return (this->lcb * this->hsl) + this->ovt;
		}
		 
		string getloai(){
			return "Programmer";
		}
		int getn(){
			return 0;
		}
};

class Designer:public NhanVien{
	protected:
		long long lcb,bn;
	public:

		void nhap(){
			NhanVien::nhap();
			cout << "Luong co ban: "; cin>> this->lcb; cin.ignore();
			cout << "Bonus: "; cin >> this->bn; cin.ignore();
		}
		void xuat(){
			NhanVien::xuat();
			cout << "Luong co ban: "<< this->lcb<<endl;
			cout << "Bonus: "<< this->bn<<endl;
		}
		long long TinhLuong(){
			return (this->lcb * this->hsl) + this->bn;
		}
		
		string getloai(){
			return "Designer";
		}
		int getn(){
			return 0;
		}
		 
};

class Tester:public NhanVien{
	protected:
		long long lcb;
		int er;
	public:

		void nhap(){
			NhanVien::nhap();
			cout << "Luong co ban: "; cin>> this->lcb; cin.ignore();
			cout << "Error: "; cin>> this->er; cin.ignore();
		}
		void xuat(){
			NhanVien::xuat();
			cout << "Luong co ban: "<< this->lcb<<endl;
			cout << "Error: "<<this->er<<endl;
		}
		long long TinhLuong(){
			return (this->lcb * this->hsl) + (this->er * 200.000) ;
		}

		string getloai(){
			return "Tester";
		}
		int getn(){
			return 0;
		}
};


class Manager:public NhanVien{
	protected:
		NhanVien *a[100];
		int n;
		long long lcb;
		int cnt;
	public:
		Manager(){
			this->n=0;
		
		}
		void nhap(){			
			NhanVien::nhap();
			cout << "Luong co ban: "; cin>> this->lcb; cin.ignore();
			while(true){
			system("cls");

			cout << "**Nhap Danh Sach Nhan Vien Cap Duoi**\n";
			cout << "1.Manager"<<endl;
			cout << "2.Progammer"<<endl;
			cout << "3.Designer"<<endl;
			cout << "4.Tester"<<endl;
			cout << "0.Thoat"<<endl;
			cout << "Chon: ";
			int choose; cin >> choose; cin.ignore();
			switch(choose){
				case 1:{
					system("cls");
					cout << "**Manager**\n";
					a[n] = new Manager();
					a[n]->nhap();
					n++;
					break;
				}
				case 2:{
					system("cls");
					cout << "**Programmer**\n";
					a[n] = new Programmer();
					a[n]->nhap();
					n++;
					break;
				}
				case 3:{
					system("cls");
					cout << "**Designer**\n";
					a[n] = new Designer();
					a[n]->nhap();
					n++;
					break;
				}
				case 4:{
					system("cls");
					cout << "**Tester**\n";
					a[n] = new Tester();
					a[n]->nhap();
					n++;
					break;
				}
				
			}
			if(choose == 0){
				break;
			}				
			}
			
		}
		void xuat(){
			NhanVien::xuat();
			cout << "Luong co ban: "<< this->lcb<<endl;
		}
		long long TinhLuong(){
			return this->lcb * this->hsl;
		}
		
		int getn(){
			return n;
		}
		string getloai(){
			return "Manager";
		}
		 
};
class QLNV{
	private:
		NhanVien *a[100];
		int n;
	public:

		QLNV(){
			this->n =0;

		}
		
		void nhapnv(){
			cout << "**Nhap Danh Sach Nhan Vien**\n";
			cout << "1.Manager"<<endl;
			cout << "2.Progammer"<<endl;
			cout << "3.Designer"<<endl;
			cout << "4.Tester"<<endl;
			cout << "Chon: ";
			int choose; cin >> choose; cin.ignore();
			switch(choose){
				case 1:{
					system("cls");
					cout << "**Manager**\n";
					a[n] = new Manager();
					a[n]->nhap();
					n++;
					break;
				}
				case 2:{
					system("cls");
					cout << "**Programmer**\n";
					a[n] = new Programmer();
					a[n]->nhap();
					n++;
					break;
				}
				case 3:{
					system("cls");
					cout << "**Designer**\n";
					a[n] = new Designer();
					a[n]->nhap();
					n++;
					break;
				}
				case 4:{
					system("cls");
					cout << "**Tester**\n";
					a[n] = new Tester();
					a[n]->nhap();
					n++;
					break;
				}
				
			}
		}
		
		void TongLuong(){
			cout << "**Tong Luong Toan Bo Nhan Vien**"<<endl;
			int sum =0;
			for(int i = 0; i < n;i++){
				sum += a[i]->TinhLuong();
			}
			cout << "Tong: "<< sum <<endl;

		}
		
		void checksizem(){
			cout << "**Manager > 10 nhan vien**\n";

			int cnt=0;
			for(int i = 0;i<n;i++){
				if(a[i]->getloai() == "Manager"){
					if(a[i]->getn()+1 >= 10){
						cnt++;
					}
				}
			}
			cout << "So luong: "<<cnt<<endl;
		}
		
		void menu(){
			while(true){
				system("cls");
				cout << "**Quan Ly Nhan Vien**\n";
				cout << "1.Nhap Danh Sach Nhan Vien"<<endl;
				cout << "2.Tong Luong Nhan Vien"<<endl;
				cout << "3.Manager > 10 nhan vien"<<endl;
				cout << "0.Thoat"<<endl;
				cout << "Chon: ";
				int choose; cin >> choose ; cin.ignore();
				switch(choose){
					case 1:{
						system("cls");
						this->nhapnv();
						getch();
						break;
					}
					case 2:{
						system("cls");
						this->TongLuong();
						getch();
						break;
					}
					case 3:{
						system("cls");
						this->checksizem();
						getch();
						break;
					}
					case 0:{
						exit(0);
						break;
					}
				}
			}
		}
};


int main(){
	QLNV ql;
	ql.menu();


	return 0;
}

