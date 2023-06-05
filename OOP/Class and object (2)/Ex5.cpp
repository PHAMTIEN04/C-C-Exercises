#include <bits/stdc++.h>

using namespace std;

class Diem {
private:
	double a, b;

public:
	void xuat(); // Phuong th?c xu?t th�ng tin di?m
	Diem(double x = 0, double y = 0); // H�m d?ng
	Diem(const Diem& u); // H�m d?ng sao ch�p
	double kc(Diem u); // T�nh kho?ng c�ch gi?a hai di?m
};

Diem::Diem(double x, double y) : a(x), b(y) {
	// H�m d?ng v?i gi� tr? m?c d?nh, kh?i t?o di?m (a, b) v?i gi� tr? x v� y
}

Diem::Diem(const Diem& u) {
	cout << "Sao chep" << endl;
	a = u.a;
	b = u.b;
	// H�m d?ng sao ch�p, t?o m?t b?n sao c?a d?i tu?ng u
}

double Diem::kc(Diem u) {
	// T�nh kho?ng c�ch Euclid gi?a hai di?m
	return sqrt(pow(a - u.a, 2) + pow(b - u.b, 2));
}

void Diem::xuat() {
	cout << a << " " << b << endl;
	// Xu?t th�ng tin di?m (a, b)
}

int main() {
	Diem p(1, 3);
	p.xuat();

	Diem p1;
	p1 = p;
	p1.xuat();

	Diem p2(p);
	p2.xuat();

	double res = p1.kc(p);
	cout << res;

	return 0;
}

