//Thanh Phan Hang va Ham Hang va Class Hang
#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

class sv {
	private:
		string msv;     // M� s? sinh vi�n
		string hoten;   // H? v� t�n sinh vi�n
		double diem;    // �i?m s? c?a sinh vi�n

	public:
		string getmsv();   // Getter cho msv (M� s? sinh vi�n)
		void nhap();       // H�m nh?p th�ng tin sinh vi�n
		void xuat();       // H�m xu?t th�ng tin sinh vi�n
};

string sv::getmsv() {
	return msv;
}

void sv::nhap() {
	cout << "MSV:";
	getline(cin, msv);    // Nh?p m� s? sinh vi�n
	cout << "Name:";
	getline(cin, hoten);  // Nh?p h? v� t�n sinh vi�n
	cout << "Diem:";
	cin >> diem;           // Nh?p di?m s? c?a sinh vi�n
	cin.ignore();
}

void sv::xuat() {
	cout << msv << " " << hoten << " " << diem << endl;
}

class Lop {
	private:
		int n;        // S? lu?ng sinh vi�n
		sv *sv1;      // Con tr? t?i m?t m?ng c�c d?i tu?ng l?p sv

	public:
		Lop(int a = 0) : n(a) {
			sv1 = new sv[n];
		}
		void nhap() const;      // H�m nh?p th�ng tin c?a t?t c? sinh vi�n
		void xuat() const;      // H�m xu?t th�ng tin c?a t?t c? sinh vi�n
		void search(string msv) const;   // H�m t�m ki?m sinh vi�n theo m� s? sinh vi�n
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
			sv1[i].xuat();     // Hi?n th? th�ng tin sinh vi�n n?u m� s? tr�ng kh?p
		}
	}
}

void Lop::nhap() const {
	for (int i = 0; i < n; i++) {
		cout << "Nhap sinh vien thu " << i + 1 << ":" << endl;
		sv1[i].nhap();     // Nh?p th�ng tin t?ng sinh vi�n
	}
}

void Lop::xuat() const {
	for (int i = 0; i < n; i++) {
		sv1[i].xuat();     // Xu?t th�ng tin t?ng sinh vi�n
	}
}

int main() {
	const Lop a(2);
	a.nhap();    // Nh?p th�ng tin sinh vi�n
	a.xuat();    // Xu?t th�ng tin sinh vi�n
	a.search("22T1020763");    // T�m ki?m sinh vi�n theo m� s?

	return 0;
}

