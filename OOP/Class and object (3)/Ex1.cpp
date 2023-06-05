//Thanh Phan Hang va Ham Hang va Class Hang
#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

class sv {
	private:
		string msv;     // Mã s? sinh viên
		string hoten;   // H? và tên sinh viên
		double diem;    // Ði?m s? c?a sinh viên

	public:
		string getmsv();   // Getter cho msv (Mã s? sinh viên)
		void nhap();       // Hàm nh?p thông tin sinh viên
		void xuat();       // Hàm xu?t thông tin sinh viên
};

string sv::getmsv() {
	return msv;
}

void sv::nhap() {
	cout << "MSV:";
	getline(cin, msv);    // Nh?p mã s? sinh viên
	cout << "Name:";
	getline(cin, hoten);  // Nh?p h? và tên sinh viên
	cout << "Diem:";
	cin >> diem;           // Nh?p di?m s? c?a sinh viên
	cin.ignore();
}

void sv::xuat() {
	cout << msv << " " << hoten << " " << diem << endl;
}

class Lop {
	private:
		int n;        // S? lu?ng sinh viên
		sv *sv1;      // Con tr? t?i m?t m?ng các d?i tu?ng l?p sv

	public:
		Lop(int a = 0) : n(a) {
			sv1 = new sv[n];
		}
		void nhap() const;      // Hàm nh?p thông tin c?a t?t c? sinh viên
		void xuat() const;      // Hàm xu?t thông tin c?a t?t c? sinh viên
		void search(string msv) const;   // Hàm tìm ki?m sinh viên theo mã s? sinh viên
};

void Lop::search(string amsv) const {
	cout << "Select MSV :" << amsv;
	Sleep(500);
	cout << ".";
	Sleep(500);
	cout << ".";
	Sleep(500);
	cout << "." << endl;

	for (int i = 0; i < n; i++) {
		if (sv1[i].getmsv() == amsv) {
			sv1[i].xuat();     // Hi?n th? thông tin sinh viên n?u mã s? trùng kh?p
		}
	}
}

void Lop::nhap() const {
	for (int i = 0; i < n; i++) {
		cout << "Nhap sinh vien thu " << i + 1 << ":" << endl;
		sv1[i].nhap();     // Nh?p thông tin t?ng sinh viên
	}
}

void Lop::xuat() const {
	for (int i = 0; i < n; i++) {
		sv1[i].xuat();     // Xu?t thông tin t?ng sinh viên
	}
}

int main() {
	const Lop a(2);
	a.nhap();    // Nh?p thông tin sinh viên
	a.xuat();    // Xu?t thông tin sinh viên
	a.search("22T1020763");    // Tìm ki?m sinh viên theo mã s?

	return 0;
}

