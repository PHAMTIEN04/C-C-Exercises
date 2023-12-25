#include <bits/stdc++.h>

using namespace std;

class NhanVien{
	private:
		string mnv,ht,ns,gt,td,cv;
		int hsl,hspc;
	public:
		NhanVien(){
			this->mnv = "";
			this->ht = "";
			this->gt = "";
			this->td = "";
			this->cv = "";
			this->hsl = 0;
			this->hspc = 0;

		}
		NhanVien(string mnv,string ht,string ns,string gt,string td,string cv,int hsl,int hspc):mnv(mnv),ht(ht),ns(ns),gt(gt),td(td),cv(cv),hsl(hsl),hspc(hspc){};
		
		friend istream& operator >>(istream &in,NhanVien &nv){
			cout << "Nhap ma nhan vien: ";
			getline(in,nv.mnv);
			cout << "Nhap ho ten: ";
			getline(in,nv.ht);
			cout << "Nhap gioi tinh: ";
			getline(in,nv.gt);
			cout << "Nhap trinh do: ";
			getline(in,nv.td);
			cout << "Nhap chuc vu: ";
			getline(in,nv.cv);
			cout << "Nhap he so luong: ";
			in >> nv.hsl ; in.ignore();
			cout << "Nhap he so phu cap: ";
			in >> nv.hspc; in.ignore();
			return in;
		}
		
		friend ostream& operator <<(ostream &out,NhanVien &nv){
			out << "Ma nhan vien: "<< nv.mnv<<endl;
			out << "Ho ten: "<< nv.ht<<endl;
			out << "Gioi tinh: "<< nv.gt<<endl;
			out << "Trinh do: "<< nv.td << endl;
			out << "Chuc vu: "<< nv.cv<<endl;
			out << "He so luong: "<< nv.hsl<<endl;
			out << "He so phu cap: "<< nv.hspc<<endl;
			return out;
		}
};		


int main(){
	NhanVien *nv;
	int n;
	cout << "Nhap so luong Nhan Vien: "; cin >> n; cin.ignore();
	nv = new NhanVien[n];
	cout << "**Input Thong Tin Nhan Vien**\n";
	for(int i = 0; i < n;i++){
		cout << "Nhan Vien [" << i+1 << "]:\n";
		cin >> nv[i];
	}
	cout << "**Output Thong Tin Nhan Vien**\n";
	for(int i = 0; i < n;i++){
		cout << "Nhan Vien [" << i+1 << "]:\n";
		cout << nv[i];
	}




	return 0;
}

