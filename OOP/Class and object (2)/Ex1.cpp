#include <bits/stdc++.h>

using namespace std;

class Diem {
private:
	double x, y;

public:
	void xuat();

	// H�m d?ng v?i c�c tham s? m?c d?nh
	Diem(double x = 0, double y = 0) : x(x), y(y) {};

};

void Diem::xuat() {
	cout << x << " " << y << endl;
}

int main() {
	Diem p;         // G?i h�m d?ng kh�ng c� tham s?, s? d?ng gi� tr? m?c d?nh (0, 0)
	p.xuat();

	Diem p1(1);     // G?i h�m d?ng c� m?t tham s?, s? d?ng gi� tr? tham s? cho x v� gi� tr? m?c d?nh (0) cho y
	p1.xuat();

	Diem p2(2, 3);  // G?i h�m d?ng c� hai tham s?, s? d?ng gi� tr? tham s? cho x v� y
	p2.xuat();

	return 0;
}

