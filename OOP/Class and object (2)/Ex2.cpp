#include <bits/stdc++.h>

using namespace std;

class Diem {
private:
	double x, y;

public:
	void xuat();
	void update(double a, double b);

	// Hàm d?ng v?i các tham s? m?c d?nh
	Diem(double x = 0, double y = 0) : x(x), y(y){};
};

void Diem::xuat() {
	cout << x << " " << y << endl;
}

void Diem::update(double a, double b) {
	x = a;
	y = b;
}

int main() {
	// T?o d?i tu?ng p v?i giá tr? ban d?u (3, 4)
	Diem p(3, 4);
	p.xuat();

	// T?o con tr? p1 tr? t?i d?i tu?ng p
	Diem* p1 = &p;
	p1->xuat();

	// C?p nh?t giá tr? c?a d?i tu?ng p b?ng hàm update
	p.update(5, 6);
	p.xuat();
	p1->xuat();

	// T?o d?i tu?ng p2 thông qua new và con tr?
	Diem* p2 = new Diem(3, 6);
	p2->xuat();

	// Xóa d?i tu?ng p2 d? gi?i phóng b? nh?
	delete p2;

	return 0;
}

