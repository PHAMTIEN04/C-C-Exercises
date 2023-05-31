#include <bits/stdc++.h>

using namespace std;

class Diem {
	private:
		double x, y;
	public:
		// Phuong th?c d? kh?i t?o giá tr? cho d?i tu?ng Diem
		void khoitao(double x, double y);

		// Phuong th?c d? nh?p giá tr? cho d?i tu?ng Diem
		void nhap();

		// Phuong th?c d? xu?t giá tr? c?a d?i tu?ng Diem
		void xuat();

		// Phuong th?c d? di chuy?n di?m theo d? l?ch dx, dy
		void dichuyen(double dx, double dy);
};

void Diem::khoitao(double a, double b){
	x = a;
	y = b;
}

void Diem::xuat(){
	cout << "Toa do: (" << x << ", " << y << ")" << endl;
}

void Diem::nhap(){
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
}

void Diem::dichuyen(double dx, double dy){
	x += dx;
	y += dy;
}

int main(){
	Diem p1;

	p1.khoitao(1, 2);
	cout << "Diem p1 sau khi khoi tao: ";
	p1.xuat();

	p1.dichuyen(3, 4);
	cout << "Diem p1 sau khi dichuyen: ";
	p1.xuat();

	p1.nhap();
	cout << "Diem p1 sau khi nhap: ";
	p1.xuat();

	p1.dichuyen(9, 10);
	cout << "Diem p1 sau khi dichuyen: ";
	p1.xuat();

	return 0;
}

