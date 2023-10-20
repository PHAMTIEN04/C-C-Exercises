#include <iostream>
using namespace std;
class DuongTron{
//thuoc tinh
	float r;
	static int dem;
//phuong thuc/ham
	public:	
	DuongTron(){ r=0;dem++;}
	DuongTron(float bk);
	void setR(float bk);	
	float tinhDienTich(){
		return 3.14*r*r;
	}	
	void hienThi();
	float getR();
	static void inSoDT(){
		cout<<dem<<" duong tron duoc khoi tao" <<endl;	
	}
};
int DuongTron::dem=0;
DuongTron::DuongTron(float bk){
	r=bk;
}
void DuongTron::setR(float bk){
	r=bk;
}
float DuongTron::getR(){
	return r;
}
void DuongTron::hienThi(){
	cout<<"Duong tron ban kinh r="<<r<<endl;
	cout<<"Dien tich la "<<tinhDienTich()<<endl;
	
}
class MangDT{
	DuongTron *dt;  //dt[100];
	int n; //so phan tu cua mang duong tron
	public:
		MangDT(){ n=0;dt=NULL;}
		MangDT(int nn){
			n=nn;
			dt= new DuongTron[n];
		}
		~MangDT(){ n=0;delete []dt;}		
		void nhap(); void hienThi(); void sapXep(); float bkLonNhat();
};
void MangDT::nhap(){
	//cout<<"Nhap so duong tron n=";cin>>n;
	for (int i=0;i<n;i++){
		float bk;
		cout <<"Nhap ban kinh r=";cin >>bk;
		dt[i].setR(bk);
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
	d.setR(6);
	cout<<"ban kinh r="<<d.getR()<<endl;	
	d.hienThi();
	DuongTron::inSoDT();
	DuongTron * p =new DuongTron;
	p->setR(7);
	p->hienThi();
	DuongTron::inSoDT();
	cout<<"ban kinh (con tro) r="<<p->getR()<<endl;
	int n;
	cout<<"Nhap so duong tron n=";cin>>n;
	MangDT dt(n);
	dt.nhap();
	dt.sapXep();
	dt.hienThi();
	cout<<"ban kinh lon nhat la "<<dt.bkLonNhat()<<endl;
}

