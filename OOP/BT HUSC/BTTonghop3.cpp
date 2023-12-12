#include <bits/stdc++.h>

using namespace std;
class ThuVien{
	protected:
		string matl;
		string tennxb;
		int sbph;
	public:
		ThuVien(string vmatl="",string vtennxb="",int vsbph=0):matl(vmatl),tennxb(vtennxb),sbph(vsbph){};
		
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

			int choose; cin >> choose;
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
			for(int i = 0;i < n ;i++){
				tv[i]->hienthi();
			}
		}
};
int main(){
	QuanLySach s;
	s.themtailieu();
	s.hienthi();


	return 0;
}

