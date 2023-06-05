#include <bits/stdc++.h>

using namespace std;

class Diem {
private:
	double x, y;

public:
	void xuat();

	// Hàm d?ng v?i các tham s? m?c d?nh
	Diem(double x = 0, double y = 0) : x(x), y(y) {};

};

void Diem::xuat() {
	cout << x << " " << y << endl;
}

int main() {
	Diem p;         // G?i hàm d?ng không có tham s?, s? d?ng giá tr? m?c d?nh (0, 0)
	p.xuat();

	Diem p1(1);     // G?i hàm d?ng có m?t tham s?, s? d?ng giá tr? tham s? cho x và giá tr? m?c d?nh (0) cho y
	p1.xuat();

	Diem p2(2, 3);  // G?i hàm d?ng có hai tham s?, s? d?ng giá tr? tham s? cho x và y
	p2.xuat();

	return 0;
}

