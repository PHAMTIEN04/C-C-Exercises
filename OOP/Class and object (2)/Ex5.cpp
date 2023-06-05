#include <bits/stdc++.h>

using namespace std;

class Diem {
private:
	double a, b;

public:
	void xuat(); // Phuong th?c xu?t thông tin di?m
	Diem(double x = 0, double y = 0); // Hàm d?ng
	Diem(const Diem& u); // Hàm d?ng sao chép
	double kc(Diem u); // Tính kho?ng cách gi?a hai di?m
};

Diem::Diem(double x, double y) : a(x), b(y) {
	// Hàm d?ng v?i giá tr? m?c d?nh, kh?i t?o di?m (a, b) v?i giá tr? x và y
}

Diem::Diem(const Diem& u) {
	cout << "Sao chep" << endl;
	a = u.a;
	b = u.b;
	// Hàm d?ng sao chép, t?o m?t b?n sao c?a d?i tu?ng u
}

double Diem::kc(Diem u) {
	// Tính kho?ng cách Euclid gi?a hai di?m
	return sqrt(pow(a - u.a, 2) + pow(b - u.b, 2));
}

void Diem::xuat() {
	cout << a << " " << b << endl;
	// Xu?t thông tin di?m (a, b)
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

