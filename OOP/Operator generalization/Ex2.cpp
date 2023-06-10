//MOT SO VI DU
#include <iostream>

class mang1chieu {
private:
    int n;    // Kích thu?c c?a m?ng
    int* a;   // Con tr? d?n m?ng

public:
    mang1chieu(int d = 0) : n(d) {
        if (n == 0) {
            a = NULL;   // Kh?i t?o m?ng r?ng
        } else {
            a = new int[n];   // Kh?i t?o m?ng v?i kích thu?c n
        }
    }

    void xuat();    // Phuong th?c xu?t m?ng
    void nhap();    // Phuong th?c nh?p m?ng
    ~mang1chieu();  // Destructor
    mang1chieu& operator=(mang1chieu& u);   // Toán t? gán
    mang1chieu(mang1chieu& u);   // Constructor sao chép
};

mang1chieu::mang1chieu(mang1chieu& c) {
    // Constructor sao chép
    this->n = c.n;
    this->a = new int[n];
    for (int i = 0; i < n; i++) {
        this->a[i] = c.a[i];
    }
}

mang1chieu& mang1chieu::operator=(mang1chieu& u) {
    // Toán t? gán
    this->n = u.n;
    this->a = new int[n];
    for (int i = 0; i < n; i++) {
        this->a[i] = u.a[i];
    }
    return *this;
}

void mang1chieu::nhap() {
    // Hàm nh?p m?ng
    if (n == 0) {
        std::cin >> n;
        a = new int[n];
    }
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
}

void mang1chieu::xuat() {
    // Hàm xu?t m?ng
    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
}

mang1chieu::~mang1chieu() {
    // Destructor
    std::cout << "deleted\n";
    delete[] a;
    a = NULL;
}

int main() {
    mang1chieu p(3);    // Kh?i t?o d?i tu?ng mang1chieu v?i kích thu?c 3
    p.nhap();           // Nh?p giá tr? cho m?ng
    p.xuat();           // Xu?t giá tr? c?a m?ng

    mang1chieu p2;      // Kh?i t?o d?i tu?ng mang1chieu m?i
    p2 = p;             // Gán giá tr? c?a p cho p2
    p2.xuat();          // Xu?t giá tr? c?a p2

    mang1chieu* p3 = &p;    // Kh?i t?o con tr? p3 tr? t?i p
    p3->xuat();             // Xu?t giá tr? c?a p thông qua con tr? p3

    p.nhap();           // Nh?p giá tr? cho m?ng p
    p2.xuat();          // Xu?t giá tr? c?a p2
    p3->xuat();         // Xu?t giá tr? c?a p thông qua con tr? p3

    return 0;
}

