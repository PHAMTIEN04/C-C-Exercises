#include <bits/stdc++.h>

using namespace std;
class SoPhuc{
	private:
		int r;
		int f;
	public:
		void nhap();
		void xuat();
		int cong(SoPhuc sp);
		int tru(SoPhuc sp);
		int nhan(SoPhuc sp);
		double chia(SoPhuc sp);
};
void SoPhuc::nhap(){
	cout << "Nhap Phan Thuc: ";cin >> r;
	cout << "Nhap Phan Ao: ";cin >> f;
}
void SoPhuc::xuat(){
	cout << "So Phuc: "<< r << "+"<< f<<"i"<<endl;
	cout << "Phan Thuc: "<< r<<endl;
	cout << "Phan Ao: "<< f <<endl;
}
int SoPhuc::cong(SoPhuc sp){
	cout << "Cong So Phuc"<<endl;
	r = r + sp.r;
	f = f + sp.f;
	
}
int SoPhuc::tru(SoPhuc sp){
	cout << "Tru So Phuc"<<endl;
	r = r - sp.r;
	f = f - sp.f;
	
}
int SoPhuc::nhan(SoPhuc sp){
	cout << "Nhan So Phuc"<<endl;
	r = r * sp.r;
	f = f * sp.f;
	
}
double SoPhuc::chia(SoPhuc sp){
	cout << "Chia So Phuc"<<endl;
	r = r / sp.r;
	f = f / sp.f;
	
}

int main(){
	SoPhuc sp,sp1;
	sp.nhap();
	sp.xuat();
	sp1.nhap();
	sp1.xuat();
	sp.cong(sp1);
	sp.xuat();
	sp.tru(sp1);
	sp.xuat();
	sp.nhan(sp1);
	sp.xuat();
	sp.chia(sp1);
	sp.xuat();

	return 0;
}

