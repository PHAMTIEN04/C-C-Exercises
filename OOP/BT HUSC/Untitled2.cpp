#include<iostream>
#include<string>

using namespace std;

class CanBo {
	protected:
		string maCanBo;
		string hoTen;
		int ngayVaoCoQuan[3];

	public:
		CanBo() {
			maCanBo = "";
			hoTen = "";
			for(int i = 0; i < 3; i++) {
				ngayVaoCoQuan[i] = 0;
			}
		}

		CanBo(string maCanBo, string hoTen, int* ngayVaoCoQuan) {
			this->maCanBo = maCanBo;
			this->hoTen = hoTen;
			for(int i = 0; i < 3; i++) {
				this->ngayVaoCoQuan[i] = ngayVaoCoQuan[i];
			}
		}

		string getMaCanBo() {
			return maCanBo;
		}

		string getHoTen() {
			return hoTen;
		}

		int* getNgayVaoCoQuan() {
			return ngayVaoCoQuan;
		}

		void setMaCanBo(string maCanBo) {
			this->maCanBo = maCanBo;
		}

		void setHoTen(string hoTen) {
			this->hoTen = hoTen;
		}

		void setNgayVaoCoQuan(int* ngayVaoCoQuan) {
			for(int i = 0; i < 3; i++) {
				this->ngayVaoCoQuan[i] = ngayVaoCoQuan[i];
			}
		}

		void nhap() {
			cout<<"Nhap ma can bo: ";
			cin.ignore();
			getline(cin, maCanBo);
			cout<<"Nhap ho ten: ";
			getline(cin, hoTen);
			cout<<"Nhap (ngay,thang,nam) cach nhau boi dau cach: ";
			cin>>ngayVaoCoQuan[0]>>ngayVaoCoQuan[1]>>ngayVaoCoQuan[2];
		}

		void hienThi() {
			cout<<"Ma can bo: "<< maCanBo
			    <<", Ho ten: "<< hoTen
			    << ", Ngay vao co quan: "
			    << ngayVaoCoQuan[0] << "/"
			    << ngayVaoCoQuan[1] << "/"
			    << ngayVaoCoQuan[2];
		}

		bool operator > (CanBo& other) {
			if(ngayVaoCoQuan[2] != other.ngayVaoCoQuan[2]) {
				return ngayVaoCoQuan[2] > other.ngayVaoCoQuan[2];
			} else if(ngayVaoCoQuan[1] != ngayVaoCoQuan[1]) {
				return ngayVaoCoQuan[1] > other.ngayVaoCoQuan[1];
			} else {
				return ngayVaoCoQuan[0] > ngayVaoCoQuan[0];
			}
		}
};

class GiangVien : public CanBo {
	private:
		string donVi;
		int heSoLuong;
		long long phuCap;
	public:
		GiangVien() : CanBo() {
			donVi = "";
			heSoLuong = 0;
			phuCap = 0;
		}
		GiangVien(string maCanBo, string hoTen, int* ngayVaoCoQuan, string donVi, int heSoLuong, long long phuCap) : CanBo(maCanBo, hoTen, ngayVaoCoQuan) {
			this->donVi = donVi;
			this->heSoLuong = heSoLuong;
			this->phuCap = phuCap;
		}

		void setDonVi(string donVi) {
			this->donVi = donVi;
		}

		string getDonVi() {
			return donVi;
		}

		void setHeSoLuong(int heSoLuong) {
			this->heSoLuong = heSoLuong;
		}

		int getHeSoLuong() {
			return heSoLuong;
		}

		void setPhuCap(long long phuCap) {
			this->phuCap = phuCap;
		}

		long long getPhuCap() {
			return phuCap;
		}

		long long TienLuong() {
			return getHeSoLuong() * 1490000 + getPhuCap();
		}

		void nhap() {
			CanBo::nhap();
			cout<<"Nhap don vi: ";
			cin.ignore();
			getline(cin, donVi);
			cout<<"Nhap he so luong: ";
			cin>>heSoLuong;
			cout<<"Nhap phu cap: ";
			cin>>phuCap;
		}

		void hienThi() {
			CanBo::hienThi();
			cout<<", Don vi: "<< donVi
			    << ", He so luong: " << heSoLuong
			    <<", Phu cap: "<< phuCap
			    << ", Tien luong: "<< TienLuong()<<endl;
		}
};

bool KiemTra(string TenDonVi[], string a,int n){
	for(int i = 0; i < n; i++){
		if(a == TenDonVi[i]){
			return false;
		}
	}
	return true;
}

int main() {
	int n;
	while (true) {
		cout<<"Nhap so luong giang vien: ";
		cin>>n;
		if(n <= 0 || n > 50) {
			cout<<"So luong khong hop le! Vui long nhap lai."<<endl;
		} else {
			break;
		}
	}

	GiangVien GV[n];

	for(int i = 0; i < n; i++) {
		cout<<"Nhap thong tin cho giang vien ["<< i + 1 <<"]"<<endl;
		GV[i].nhap();
	}

	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			if(GV[i] > GV[j]) {
				swap(GV[i], GV[j]);
			}
		}
	}

	cout<<"Danh sach giang vien sau khi sap xep."<<endl;
	for(int i = 0; i < n; i++) {
		GV[i].hienThi();
	}

	long long tongLuong = 0;
	for(int i = 0; i < n; i++) {
		tongLuong += GV[i].TienLuong();
	}

	long long LuongTB = tongLuong / n;
	cout<<"\nLuong trung binh cua cac giang vien: "<< LuongTB;

	cout << "\nBang luong cua cac giang vien theo tung don vi:" << endl;
	
	string TenDonVi[50];
	int cnt = 0;
	for(int i = 0; i < n; i++){
		if(KiemTra(TenDonVi,GV[i].getDonVi(),n)){
			TenDonVi[i] = GV[i].getDonVi();
			cnt++;
		}
	}
	
	for(int i = 0 ; i < cnt ;i++){
		cout << TenDonVi[i] << " ";
	}
	
	for(int i = 0;i< cnt;i++){
		for(int j = 0 ; j < n ;j++){
			if(GV[j].getDonVi() == TenDonVi[i]){
				GV[j].hienThi();
			}
		}
	}
	
	
//	string tenDonVi = GV[0].getDonVi();
//	cout << "Don vi: " << tenDonVi;
//
//	for (int i = 0; i < n; i++) {
//		if (GV[i].getDonVi() == tenDonVi) {
//			GV[i].hienThi();
//		}
//	}
//
//	for(int i = 0; i < n; i++) {
//		if (GV[i].getDonVi() != tenDonVi) {
//			tenDonVi = GV[i].getDonVi();
//		}
//	}
//
//	cout << "Don vi: " << tenDonVi;
//	for (int i = 0; i < n; i++) {
//		if (GV[i].getDonVi() == tenDonVi) {
//			GV[i].hienThi();
//		}
//	}

	return 0;
}
