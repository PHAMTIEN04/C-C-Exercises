#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
class CanBo{
	protected:
		string mcb,ht;
		int ns;
		string khoa,tdcm;
		double hsl;
		int snct;
	public:
		CanBo(string mcb="",string ht="",int ns=0,string khoa="",string tdcm="",float hsl =0,int snct=0):
		mcb(mcb),ht(ht),ns(ns),khoa(khoa),tdcm(tdcm),hsl(hsl),snct(snct){};
		
		virtual	void nhap(){
			cout <<"Ma can bo: "; getline(cin,this->mcb);
			cout <<"Ho ten: "; getline(cin,this->ht);
			cout <<"Ngay sinh: "; cin>>this->ns; cin.ignore();
			cout <<"Khoa: "; getline(cin,this->khoa);
			cout <<"Trinh do chuyen mon: "; getline(cin,this->tdcm);
			cout <<"He so luong: "; cin >> this->hsl; cin.ignore();
			cout <<"So nam tham nien cong tac: "; cin>> this->snct; cin.ignore();
			
		}
		
		virtual double TinhLuong()=0;
		
		void xuat(){
			cout << "Ma can bo: " << this->mcb << endl;
			cout << "Ho ten: "<< this->ht << endl;
			cout << "Ngay sinh: "<< this->ns<<endl;
			cout << "Khoa: " << this->khoa<<endl;
			cout << "Trinh do chuyen mon: "<< this->tdcm <<endl;
			cout << "He so luong: "<< this->hsl << endl;
			cout << "So nam tham nien cong tac: "<< this->snct<<endl;
			  
		}
		virtual string getloai()=0;
		
		string getmcb(){
			return this->mcb;
		}
};

class GiangVien:public CanBo{
	protected:
		double lcb,pcud,pctn;
	public:
		GiangVien(double lcb =0,double pcud = 0,double pctn = 0,string mcb="",string ht="",int ns=0,string khoa="",string tdcm="",float hsl =0,int snct=0)
		:lcb(lcb),pcud(pcud),pctn(pctn),CanBo(mcb,ht,ns,khoa,tdcm,hsl,snct){};
		
		void nhap(){
			CanBo::nhap();
			cout << "Luong co ban: "; cin>> this->lcb; cin.ignore();
		}
		
		double TinhLuong(){
			this->pcud = 0.4 *(this->hsl * this->lcb);
			this->pctn = 50.000 * this->snct;
			return (this->hsl * this->lcb) + this->pcud + this->pctn;
		}
		string getloai(){
			return "GiangVien";
		}
};

class ChuyenVien:public CanBo{
	protected:
		double lcb,pccb;
	public:
		ChuyenVien(double lcb = 0,double pccb = 0,string mcb="",string ht="",int ns=0,string khoa="",string tdcm="",float hsl =0,int snct=0)
		:lcb(lcb),pccb(pccb),CanBo(mcb,ht,ns,khoa,tdcm,hsl,snct){};
		
		void nhap(){
			CanBo::nhap();
			cout << "Luong co ban: "; cin>> this->lcb; cin.ignore();
			cout << "Phu cap cho can bo: "; cin>> this->pccb; cin.ignore();
		}
		
		double TinhLuong(){
			return (this->hsl * this->lcb) + this->pccb;
		}
		string getloai(){
			return "ChuyenVien";
		}
		
	
};

class QLCB{
	private:
		CanBo *a[100];
		int n;
	public:
		QLCB(){
			this->n = 0;
		}
		void tkcb(){
			cout << "**Giang Vien**\n";
			for(int i = 0 ; i < n;i++){
				if(a[i]->getloai() == "GiangVien"){
					a[i]->xuat();
					cout << "Tien Luong: "<< a[i]->TinhLuong()<<endl;
				}
			}
			cout << "**Chuyen Vien**\n";
			for(int i = 0 ; i < n;i++){
				if(a[i]->getloai() == "ChuyenVien"){
					a[i]->xuat();
					cout << "Tien Luong: "<< a[i]->TinhLuong()<<endl;
				}
			}
		}
		
		void xoa(){
			cout << "**Xoa Can Bo**\n";
			cout << "Ma can bo: ";
			string mcb;
			getline(cin,mcb);
			for(int i = 0 ;i < n-1 ;i++){
				for(int j = i+1;j<n;j++){
					if(a[i]->getmcb()== mcb){
						CanBo *tmp;
						tmp = a[i];
						a[i] = a[j];
						a[j] = tmp;
					}
				}
			}
			int cnt =0;
			for(int i = 0;i<n;i++){
				if(a[i]->getmcb()==mcb){
					cnt++;
				}
			}
			int check;
			check = n;
			n = n - cnt;
			
		}
		
		void menu(){
			while(true){
				system("cls");
				cout << "**Quan Ly Can Bo**"<<endl;
				cout << "1.Nhap Giang Vien moi"<<endl;
				cout << "2.Nhap Chuyen Vien moi"<<endl;
				cout << "3.Xoa Can Bo"<<endl;
				cout << "4.Thong ke Can Bo theo ngach"<<endl;
				cout << "0.Thoat"<<endl;
				int choose;
				cout << "Chon: "; cin>> choose; cin.ignore();
				switch(choose){
					case 1:{
						system("cls");
						cout << "**Nhap Giang Vien**\n";
						a[n] = new GiangVien();
						a[n]->nhap();
						n++;
						getch();
						break;
					}
					case 2:{
						system("cls");
						cout << "**Nhap Chuyen Vien**\n";
						a[n] = new ChuyenVien();
						a[n]->nhap();
						n++;
						getch();
						break;
					}
					case 3:{
						system("cls");
						xoa();
						getch();
						break;
					}
					case 4:{
						system("cls");
						tkcb();
						getch();
						break;
					case 0:{
						for(int i = 0;i< n;i++){
							delete a[i];
						}
						exit(0);
						break;
					}
					}
				}
			}
		}
};
int main(){
	QLCB ql;
	ql.menu();

	return 0;
}

