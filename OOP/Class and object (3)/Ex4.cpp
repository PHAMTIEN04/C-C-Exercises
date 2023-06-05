//Cac thanh phan tinh (static)
#include <bits/stdc++.h>

using namespace std;

class Diem {
	private:
		static double x;  // Bi?n tinh x, du?c chia s? gi?a t?t c? c�c d?i tu?ng c?a l?p Diem
		double y;  // Bi?n thu?ng y, thu?c t�nh ri�ng c?a t?ng d?i tu?ng

	public:
		Diem();  // Constructor c?a l?p Diem
		~Diem();  // Destructor c?a l?p Diem
		static void Test();  // Phuong th?c tinh, c� th? g?i tr?c ti?p t? l?p m� kh�ng c?n t?o d?i tu?ng

};

Diem::Diem() {
	cout << "Ham khoi tao co " << ++x << " phan tu" << endl;  // In ra th�ng b�o khi t?o d?i tu?ng Diem
}

Diem::~Diem() {
	cout << "Ham huy bo co " << --x << " phan tu" << endl;  // In ra th�ng b�o khi h?y d?i tu?ng Diem
}

void Diem::Test() {
	cout << "Ham static " << x << endl;  // In ra gi� tr? bi?n tinh x
}

double Diem::x = 0;  // Kh?i t?o gi� tr? ban d?u cho bi?n tinh x

int main() {
	Diem a;  // T?o d?i tu?ng a t? l?p Diem
	Diem b;  // T?o d?i tu?ng b t? l?p Diem
	b.Test();  // G?i phuong th?c tinh Test t? l?p Diem

	return 0;
}

