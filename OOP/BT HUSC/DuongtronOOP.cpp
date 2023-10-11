#include <iostream>
using namespace std;
class DuongTron{
//thuoc tinh
	float r;
//phuong thuc/ham
	public:	
	float tinhDienTich(){
		return 3.14*r*r;
	}
	void khoiTao(float bk);
	void hienThi();
	float getR();   
};

float DuongTron::getR(){
	return r;
}

void DuongTron::khoiTao(float bk){
	r=bk;
}
void DuongTron::hienThi(){
	cout<<"Duong tron ban kinh r="<<r<<endl;
	cout<<"Dien tich la "<<tinhDienTich()<<endl;
}
class MangDT{
	DuongTron *dt;
	int n; //so phan tu cua mang duong tron
	public:
		void nhap(); 
		void hienThi(); 
		void sapXep(); 
		float bkLonNhat();
		MangDT(int m){
			n = m;
			dt = new DuongTron[n];
		}
		~MangDT(){
			delete []dt;
		}
};
void MangDT::nhap(){
	cout<<"Nhap so duong tron n=";cin>>n;
	for (int i=0;i<n;i++){
		float bk;
		cout <<"Nhap ban kinh r=";cin >>bk;
		dt[i].khoiTao(bk);
	}	
}
void MangDT::hienThi(){
	for (int i=0;i<n;i++){
		cout<<"duong tron "<<i+1<<" co ban kinh r="<<dt[i].getR()<<endl;
		cout<<"dien tich duong tron = "<<dt[i].tinhDienTich()<<endl;
	}
}
void MangDT::sapXep(){
	for(int i=0;i<n-1;i++){
		int min=i;
		for(int j=i+1;j<n;j++)
			if (dt[min].getR()>dt[j].getR())
				min=j;	
		DuongTron tg;
		tg=dt[i]; dt[i]=dt[min]; dt[min]=tg; //hoan doi
	}	
}
float MangDT::bkLonNhat(){
	int ln=dt[0].getR();
	for(int i=1;i<n;i++)
		if (ln<dt[i].getR())
			ln=dt[i].getR();
	return ln;
}
int main(){
	DuongTron d;
	d.khoiTao(6);
	cout<<"ban kinh r="<<d.getR()<<endl;	
	d.hienThi();
	DuongTron * p;
	p=&d;
	cout<<"ban kinh (con tro) r="<<p->getR()<<endl;
	MangDT dt(6);
	dt.sapXep();
	dt.hienThi();
	cout<<"ban kinh lon nhat la "<<dt.bkLonNhat()<<endl;
}
