#include <bits/stdc++.h>
#include <conio.h>
using namespace std;
class ThuVien{
	protected:
		string matl;
		string tennxb;
		int sbph;
	public:
		ThuVien(string vmatl="",string vtennxb="",int vsbph=0):matl(vmatl),tennxb(vtennxb),sbph(vsbph){};
		string getmtl(){
			return this->matl;
		}
		virtual string getloai() = 0;
		virtual void hienthi(){
			cout << "Ma tai lieu: " << this->matl<<endl;
			cout << "Ten nha xuat ban: "<< this->tennxb << endl;
			cout << "So ban phat hanh: "<< this->sbph << endl;
		}
};		

class Sach:public ThuVien{
	protected:
		string ttg;
		int st;
	public:
		Sach(string vttg = "",int vst = 0,string vmatl="",string vtennxb="",int vsbph=0):ttg(vttg),st(vst),ThuVien(vmatl,vtennxb,vsbph){};
		string getloai(){
			return "Sach";
		}
		void hienthi(){
			cout << "**Sach**"<<endl;
			ThuVien::hienthi();
			cout << "Ten tac gia: "<< this->ttg << endl;
			cout << "So trang: "<< this->st << endl;
		}

};

class TapChi:public ThuVien{
	protected:
		int sph,tph;
	public:
		TapChi(int vsph = 0,int vtph = 0,string vmatl="",string vtennxb="",int vsbph=0):sph(vsph),tph(vtph),ThuVien(vmatl,vtennxb,vsbph){};
		string getloai(){
			return "TapChi";
		}
		void hienthi(){
			cout << "**Tap Chi**"<<endl;
			ThuVien::hienthi();
			cout << "So phat hanh: "<< this->sph << endl;
			cout << "Thang phat hanh: "<< this->tph << endl;
		}
};

class Bao:public ThuVien{
	protected:
		int nph;
	public:
		Bao(int vnph = 0,string vmatl="",string vtennxb="",int vsbph=0):nph(vnph),ThuVien(vmatl,vtennxb,vsbph){};
		string getloai(){
			return "Bao";
		}
		void hienthi(){
			cout << "**Bao**"<<endl;
			ThuVien::hienthi();
			cout << "Ngay phat hanh: "<< this->nph << endl;
		}
};

class QuanLySach{
	private:
		ThuVien *tv[100];
		int n;
	public:
		QuanLySach(){
			this->n = 0;
		}
		void themtailieu(){
			cout << "**Them tai lieu moi**\n";
			cout << "1.Sach\n";
			cout << "2.Tap Chi\n";
			cout << "3.Bao\n";

			int choose; 
			cout << "Chon: ";
			cin >> choose;
			switch(choose){
				case 1:{
					string mtl,tnxb,ttg;
					int sbph,st;
					cin.ignore();
					cout << "Ma tai lieu: "; getline(cin,mtl);
					cout << "Ten nha xuat ban: "; getline(cin,tnxb);
					cout << "So ban phat hanh: "; cin >> sbph; cin.ignore();
					cout << "Ten tac gia: "; getline(cin,ttg);
					cout << "So trang: "; cin >> st; cin.ignore();
					tv[n] = new Sach(ttg,st,mtl,tnxb,sbph);
					n++;
					break;
				}
				case 2:{
					string mtl,tnxb;
					int sbph,sph,tph;
					cin.ignore();
					cout << "Ma tai lieu: "; getline(cin,mtl);
					cout << "Ten nha xuat ban: "; getline(cin,tnxb);
					cout << "So ban phat hanh: "; cin >> sbph; cin.ignore();
					cout << "So phat hanh: "; cin >> sph; cin.ignore();
					cout << "Thang phat hanh: "; cin >> tph; cin.ignore();
					tv[n] = new TapChi(sph,tph,mtl,tnxb,sbph);
					n++;
					break;
				}
				case 3:{
					string mtl,tnxb;
					int sbph,nph;
					cin.ignore();
					cout << "Ma tai lieu: "; getline(cin,mtl);
					cout << "Ten nha xuat ban: "; getline(cin,tnxb);
					cout << "So ban phat hanh: "; cin >> sbph; cin.ignore();
					cout << "Ngay phat hanh: "; cin >> nph; cin.ignore();
					tv[n] = new Bao(nph,mtl,tnxb,sbph);
					n++;
					break;
				}
			}
		
		}
		void hienthi(){
			cout << "**Hien thi thong tin tai lieu**\n";
			for(int i = 0;i < n ;i++){
				tv[i]->hienthi();
			}
			if(n == 0){
				cout << "Tai Lieu Trong!!!\n";
			}
		}
		void xoatailieu(){
			string mtl;
			cout <<"**Xoa tai lieu theo ma tai lieu**\n";
			cout << "Ma tai lieu muon xoa: "; 
			cin.ignore();
			getline(cin,mtl);
			int check = n;
			for(int i = 0;i < n-1;i++ ){
				for(int j = i + 1;j < n;j++){			
						if(tv[i]->getmtl() == mtl ){
							ThuVien *tmp;
							tmp = tv[i];
							tv[i] = tv[j];
							tv[j] = tmp;
						}

				}
			}
			int cnt = 0;
			for(int i = 0; i < n;i++){
				if(tv[i]->getmtl() == mtl){
					cnt++;
				}
			}
			this->n = n - cnt;
 			if(check != n ){
 				cout << "Da xoa thanh cong\n";
			 }
			else if (check == n){
				cout << "Khong tim thay tai lieu muon xoa\n";
			}
			
		}
		void timtailieu(){
			int choose;
			cout << "**Tim Tai Lieu**\n";
			cout << "1.Sach"<<endl;
			cout << "2.Tap chi"<<endl;
			cout << "3.Bao"<<endl;
			cout << "Chon: "; cin >> choose;
			switch(choose){
				case 1:{
					bool check_s = false;
					for(int i = 0 ; i < n;i++){
						if(tv[i]->getloai() == "Sach"){
							tv[i]->hienthi();
							check_s = true;
						}
					}			
					if(check_s == false)	{
						cout << "Khong tim thay tai lieu!!!\n";
					}	
					break;
				}
				case 2:{
					bool check_tc = false;
					for(int i = 0 ; i < n;i++){
						if(tv[i]->getloai() == "TapChi"){
							tv[i]->hienthi();
							check_tc= true;
						}
					}		
					if(check_tc == false)	{
						cout << "Khong tim thay tai lieu!!!\n";
					}				
					break;
				}
				case 3:{
					bool check_b = false;
					for(int i = 0 ; i < n;i++){
						if(tv[i]->getloai() == "Bao"){
							tv[i]->hienthi();
							check_b = true;
						}
					}		
					if(check_b == false)	{
						cout << "Khong tim thay tai lieu!!!\n";
					}				
					break;
				}
			}
			
		}
		void Menu(){
			int choose;
			do{
				system("cls");
				cout << "** QUAN LY TAI LIEU **\n";
				cout << "1.Them tai lieu moi\n";
				cout << "2.Xoa tai lieu theo ma tai lieu\n";
				cout << "3.Hien thi thong tin tai lieu\n";
				cout << "4.Tim tai lieu\n";
				cout << "0.Thoat\n";
				cout << "Chon: ";
				cin>> choose;
				getch();
				switch(choose){
					case 1:{
						system("cls");
						themtailieu();
						getch();
						break;
					}
					case 2:{
						system("cls");
						xoatailieu();
						getch();
						break;
					}
					case 3:{
						system("cls");
						hienthi();
						getch();
						break;
					}
					case 4:{
						system("cls");
						timtailieu();
						getch();
						break;
					}
				}
				
			}while(choose == 1 || choose == 2 || choose == 3 || choose == 4);
		}
};
int main(){
	QuanLySach s;
	s.Menu();


	return 0;
}

