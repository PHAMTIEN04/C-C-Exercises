#include <bits/stdc++.h>

using namespace std;
class TaiLieu{
	protected:
		string mtl,tnxb;
		int sbph;
	public:
		virtual void nhap(){
			cout << "Nhap ma tai lieu: ";
			getline(cin,this->mtl);
			cout << "Nhap ten nha xuan ban: ";
			getline(cin,this->tnxb);
			cout << "Nhap so ban phat hanh: ";
			cin >> this->sbph; cin.ignore();
		}
		virtual void hienthi(){
			cout << "Ma tai lieu: "<<this->mtl<<endl;
			cout << "Nha xuat ban: "<< this->tnxb<<endl;
			cout << "So ban phan hanh: "<< this->sbph<<endl;
		}
};

class Sach{
	private:
		string ttg;
		int st;
	public:
		void nhap(){
			cout<<"**Sach**"<<endl;
			TaiLieu::nhap();
			cout << "Nhap ten tac gia: ";
			getline(cin,this->ttg);
			cout << "Nhap so trang: ";
			cin >> this->st; cin.ignore();
		}
		
		void hienthi(){
			cout << "**Sach**"<<endl;
			cout << ""
		}
	
};

class TapChi{
	private:
		int sph,tph;
	
};

class Bao{
	private:
		int nph;
};

class QuanLySach{
	private:
		
};
int main(){



	return 0;
}

