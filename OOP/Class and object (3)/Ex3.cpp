//Lop Bao
#include <bits/stdc++.h>

using namespace std;

class Diem {
	private:
		double x, y;  // T?a d? x v� y c?a di?m

	public:
		Diem(double x, double y) : x(x), y(y) {};  // Constructor c?a l?p Diem, kh?i t?o t?a d? x v� y
		void xuat();  // Phuong th?c xu?t t?a d? c?a di?m
};

void Diem::xuat() {
	cout << x << " " << y << endl;  // Xu?t t?a d? x v� y c?a di?m
}

class tg {
	private:
		Diem a, b, c;  // Ba di?m a, b, c c?a tam gi�c

	public:
		tg(Diem a, Diem b, Diem c) : a(a), b(b), c(c) {};  // Constructor c?a l?p tg, kh?i t?o ba di?m a, b, c
		void xuat();  // Phuong th?c xu?t t?a d? c?a c�c di?m trong tam gi�c
};

void tg::xuat() {
	a.xuat();  // Xu?t t?a d? c?a di?m a
	b.xuat();  // Xu?t t?a d? c?a di?m b
	c.xuat();  // Xu?t t?a d? c?a di?m c
}

int main() {
	Diem p(3, 4);  // Kh?i t?o di?m p v?i t?a d? (3, 4)
	p.xuat();  // Xu?t t?a d? c?a di?m p

	tg t(Diem(3, 4), Diem(4, 5), Diem(6, 7));  // Kh?i t?o tam gi�c t v?i ba di?m c� t?a d? tuong ?ng
	t.xuat();  // Xu?t t?a d? c?a c�c di?m trong tam gi�c

	return 0;
}

