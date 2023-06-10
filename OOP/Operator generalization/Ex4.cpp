//CHUYEN DOI KIEU
#include <iostream>

class diem {
private:
    double a, b;

public:
    // Hàm kh?i t?o c?a l?p diem
    diem(double a = 0, double b = 0) : a(a), b(b) {}

    // Phép chuy?n d?i t? d?i tu?ng diem sang ki?u double
    operator double();

    // Phuong th?c xuat d? xu?t giá tr? c?a d?i tu?ng diem
    void xuat();
};

// Ð?nh nghia phép chuy?n d?i t? d?i tu?ng diem sang ki?u double
diem::operator double() {
    return a;
}

// Ð?nh nghia phuong th?c xuat d? xu?t giá tr? c?a d?i tu?ng diem
void diem::xuat() {
    cout << a << " " << b << endl;
}

int main() {
    diem a(1.2, 2);
    a.xuat();       // Xu?t giá tr? c?a d?i tu?ng diem a
    double n = a;   // Chuy?n d?i d?i tu?ng diem a sang ki?u double
    cout << n;      // Xu?t giá tr? ki?u double n
//	cout <<typeid(n).name();


	return 0;
}

