//Ham Ban va Lop Ban
#include <bits/stdc++.h>

using namespace std;

class Diem {
	private:
		double x, y;  // T?a d? x v� y c?a di?m

	public:
		Diem(double xx, double yy) : x(xx), y(yy) {};
		bool trung(Diem u);  // Ki?m tra hai di?m c� tr�ng nhau kh�ng
		friend bool trung(Diem u, Diem v);  // Ki?m tra hai di?m c� tr�ng nhau kh�ng (h�m b?n)

};

bool Diem::trung(Diem a) {
	if (a.x == x && a.y == y) {
		return true;  // N?u t?a d? x v� y c?a hai di?m tr�ng nhau, tr? v? true
	}
	else {
		return false;  // Ngu?c l?i, tr? v? false
	}
}

bool trung(Diem u, Diem v) {
	if (u.x == v.x && u.y == v.y) {
		return true;  // N?u t?a d? x v� y c?a hai di?m tr�ng nhau, tr? v? true
	}
	else {
		return false;  // Ngu?c l?i, tr? v? false
	}
}

class Tom {
	private:
		int secretTom;  // Gi� tr? b� m?t c?a Tom

	public:
		Tom(int t) : secretTom(t) {};
		void xuat();  // Xu?t gi� tr? b� m?t c?a Tom
		friend class Jerry;  // Jerry l� b?n c?a Tom v� c� th? truy c?p v�o bi?n private secretTom
};

void Tom::xuat() {
	cout << secretTom << endl;  // Xu?t gi� tr? b� m?t c?a Tom
}

class Jerry {
	private:
		int secretJerry;  // Gi� tr? b� m?t c?a Jerry

	public:
		Jerry(int j) : secretJerry(j) {};
		void xuat();  // Xu?t gi� tr? b� m?t c?a Jerry
		void change(Tom& t);  // Thay d?i gi� tr? b� m?t c?a Tom th�ng qua tham chi?u d?n d?i tu?ng Tom
};

void Jerry::change(Tom& t) {
	t.secretTom = 99;  // Thay d?i gi� tr? b� m?t c?a Tom
}

void Jerry::xuat() {
	cout << secretJerry;  // Xu?t gi� tr? b� m?t c?a Jerry
}

int main() {
	Diem p(3, 4);  // Kh?i t?o di?m p v?i t?a d? (3, 4)
	Diem p1(3, 4);  // Kh?i t?o di?m p1 v?i t?a d? (3, 4)
	cout << p.trung(p1);  // Ki?m tra hai di?m p v� p1 c� tr�ng nhau kh�ng
	cout << trung(p, p1);  // Ki?m tra hai di?m p v� p1 c� tr�ng nhau kh�ng (h�m b?n)
	Tom t(2);  // Kh?i t?o d?i tu?ng Tom v?i gi� tr? b� m?t l� 2
	t.xuat();  // Xu?t gi� tr? b� m?t c?a Tom
	Jerry j(3);  // Kh?i t?o d?i tu?ng Jerry v?i gi� tr? b� m?t l� 3
	j.xuat();  // Xu?t gi� tr? b� m?t c?a Jerry
	j.change(t);  // Thay d?i gi� tr? b� m?t c?a Tom th�ng qua d?i tu?ng Jerry
	t.xuat();  // Xu?t gi� tr? b� m?t m?i c?a Tom

	return 0;
}

