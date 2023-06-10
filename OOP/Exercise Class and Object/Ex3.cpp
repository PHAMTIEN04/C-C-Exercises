#include <bits/stdc++.h>

using namespace std;
class SV{
	private:
		string msv;
		string hoten;
		float diem;
	public:
		void nhap();
		void xuat();
		string getmsv(){
			return msv;
		}
};
void SV::nhap(){
	cout << "MSV : ";
	getline(cin,msv);	
	cout << "Hoten : ";
	getline(cin,hoten);
	cout << "Diem : ";
	cin>>diem;
	cin.ignore();
}
void SV::xuat(){
	cout << msv << " " << hoten << " "<< diem << endl;
}
class LOP{
	private:
		int n;
		SV *sv;
	public:
	LOP(int a=0):n(a){
		if(n == 0){
			cin >> n;
		}
		sv = new SV[a];
	}
	void nhap();
	void xuat();
	void search(){
		string vmsv;
		cout << "Search MSV : ";
		cin >>vmsv;
		cout << "Information :\n"; 
		for(int i = 0;i < n;i++){
			if(sv[i].getmsv()==vmsv){
				sv[i].xuat();
			}
		}
	}
};
void LOP::nhap(){
	for(int i = 0 ; i < n ;i++){
		cout << "Nhap thong tin sv["<<i+1<<"]:\n";
		sv[i].nhap();
	}
}
void LOP::xuat(){
	for(int i = 0 ; i < n;i++){
		sv[i].xuat();
	}
}
int main(){
	LOP lopa(3);
	lopa.nhap();
	lopa.xuat();
	lopa.search();
	


	return 0;
}

