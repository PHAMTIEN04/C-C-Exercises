//Cac thanh phan tinh (static)
#include <bits/stdc++.h>

using namespace std;

class Diem {
	private:
		static double x;  // Bi?n tinh x, du?c chia s? gi?a t?t c? các d?i tu?ng c?a l?p Diem
		double y;  // Bi?n thu?ng y, thu?c tính riêng c?a t?ng d?i tu?ng

	public:
		Diem();  // Constructor c?a l?p Diem
		~Diem();  // Destructor c?a l?p Diem
		static void Test();  // Phuong th?c tinh, có th? g?i tr?c ti?p t? l?p mà không c?n t?o d?i tu?ng

};

Diem::Diem() {
	cout << "Ham khoi tao co " << ++x << " phan tu" << endl;  // In ra thông báo khi t?o d?i tu?ng Diem
}

Diem::~Diem() {
	cout << "Ham huy bo co " << --x << " phan tu" << endl;  // In ra thông báo khi h?y d?i tu?ng Diem
}

void Diem::Test() {
	cout << "Ham static " << x << endl;  // In ra giá tr? bi?n tinh x
}

double Diem::x = 0;  // Kh?i t?o giá tr? ban d?u cho bi?n tinh x

int main() {
	Diem a;  // T?o d?i tu?ng a t? l?p Diem
	Diem b;  // T?o d?i tu?ng b t? l?p Diem
	b.Test();  // G?i phuong th?c tinh Test t? l?p Diem

	return 0;
}

