#include <bits/stdc++.h>

using namespace std;
class Phone{
	protected:
		string tdt,hsx;
		int gg,nxh;
	public:
		Phone(string tdt = "",string hsx = "",int gg = 0,int nxh = 0):tdt(tdt),hsx(hsx),gg(gg),nxh(nxh){};
		string settdt(string tdt){
			this->tdt = tdt;
		}
		string gettdt(){
			return this->tdt;
		}
		string sethsx(string hsx){
			this->hsx = hsx;
		}
		string gethsx(){
			return this->hsx;
		}
		
		int setgg(int gg){
			this->gg = gg;
		}
		int getgg(){
			return this->gg;
		}
		int setnxh(int nxh){
			this->nxh = nxh;
		}
		int getnxh(){
			return this->nxh;
		}
		virtual void nhap(){
			cout<< "Nhap ten dien thoai: "; getline(cin,this->tdt);
			cout<< "Nhap hang san xuat: "; getline(cin,this->hsx);
			cout<< "Nhap gia goc: "; cin >> this->gg; cin.ignore();
			cout<< "Nhap nam xuat hien: "; cin >> this->nxh; cin.ignore();
			
		}
		virtual void hienthi(){
			cout << "Ten dien thoai: "<< this->tdt<<endl;
			cout << "Hang san xuat: "<< this->hsx<<endl;
			cout << "Gia goc: "<< this->gg<<endl;
			cout << "Nam xuat hien: "<< this->nxh<<endl;
		}
		bool operator >(Phone other){
			return this->tdt > other.gettdt();
		}
		
};

class SmartPhone:public Phone{
	private:
		int tdc;
		double ktmh;
		int socmr;
	public:
		SmartPhone(int tdc = 0,double ktmh = 0,int socmr = 0,string tdt = "",string hsx = "",int gg = 0,int nxh = 0):tdc(tdc),ktmh(ktmh),socmr(socmr),Phone(tdt,hsx,gg,nxh){};
		void nhap(){
			Phone::nhap();
			cout << "a";
		}
	
};
int main(){



	return 0;
}

