#include <bits/stdc++.h>

using namespace std;

class Mang1chieu {
private:
	int n;
	int* a;

public:
	Mang1chieu(const Mang1chieu& u); // H�m d?ng sao ch�p
	Mang1chieu(int n = 0); // H�m d?ng
	~Mang1chieu(); // H�m h?y
	void nhap(); // Nh?p m?ng
	void xuat(); // Xu?t m?ng
};

Mang1chieu::Mang1chieu(const Mang1chieu& u) {
	cout << "Sao chep" << endl;
	this->n = u.n;
	this->a = new int[n];
	for (int i = 0; i < n; i++) {
		this->a[i] = u.a[i];
	}
}

Mang1chieu::Mang1chieu(int n) {
	this->n = n;
	if (n == 0) {
		a = NULL; // N?u k�ch thu?c m?ng l� 0, g�n con tr? a th�nh nullptr
	}
	else {
		a = new int[n]; // C?p ph�t d?ng m?t m?ng nguy�n v?i k�ch thu?c n
	}
}

Mang1chieu::~Mang1chieu() {
	cout << "Delete";
	delete[] a; // Gi?i ph�ng b? nh? d� c?p ph�t d?ng cho m?ng
	a = NULL; // G�n con tr? a th�nh nullptr d? tr�nh truy c?p l?i
}

void Mang1chieu::nhap() {
	if (n == 0) {
		cin >> n; // Nh?p k�ch thu?c m?ng n?u n = 0
	}

	a = new int[n]; // C?p ph�t d?ng m?t m?ng nguy�n v?i k�ch thu?c n

	for (int i = 0; i < n; i++) {
		cin >> a[i]; // Nh?p gi� tr? cho t?ng ph?n t? c?a m?ng
	}
}

void Mang1chieu::xuat() {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " "; // Xu?t gi� tr? t?ng ph?n t? c?a m?ng
	}
	cout << endl;
}

int main() {
	Mang1chieu p(2);
	p.nhap();
	p.xuat();
	Mang1chieu p1 = p;
	p1.xuat();
	return 0;
}

