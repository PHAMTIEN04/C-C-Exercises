#include <bits/stdc++.h>

using namespace std;

class Mang1chieu {
private:
	int n;
	int* a;

public:
	Mang1chieu(int n = 0); // Hàm d?ng
	~Mang1chieu(); // Hàm h?y
	void nhap(); // Nh?p m?ng
	void xuat(); // Xu?t m?ng
};

Mang1chieu::Mang1chieu(int n) {
	this->n = n;
	if (n == 0) {
		a = NULL; // N?u kích thu?c m?ng là 0, gán con tr? a thành nullptr
	} else {
		a = new int(n); // C?p phát d?ng m?t m?ng nguyên v?i kích thu?c n
	}
}

Mang1chieu::~Mang1chieu() {
	cout << "Delete";
	delete[] a; // Gi?i phóng b? nh? dã c?p phát d?ng cho m?ng
	a = NULL; // Gán con tr? a thành nullptr d? tránh truy c?p l?i
}

void Mang1chieu::nhap() {
	if (n == 0) {
		cin >> n; // Nh?p kích thu?c m?ng n?u n = 0
	}

	a = new int(n); // C?p phát d?ng m?t m?ng nguyên v?i kích thu?c n

	for (int i = 0; i < n; i++) {
		cin >> a[i]; // Nh?p giá tr? cho t?ng ph?n t? c?a m?ng
	}
}

void Mang1chieu::xuat() {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " "; // Xu?t giá tr? t?ng ph?n t? c?a m?ng
	}
	cout << endl;
}

int main() {
	Mang1chieu p;
	p.nhap();
	p.xuat();

	return 0;
}

