//TOAN TU TREN LOP VA HAM TOAN TU
#include <iostream>


class sp {
private:
    double a, b;

public:
    sp(double a = 0, double b = 0) : a(a), b(b) {}

    void xuat();
    sp operator+(sp& u);
    friend sp operator+(double c, sp u);
    void operator-();
};

// Phép c?ng gi?a m?t s? th?c và m?t s? ph?c
sp operator+(double c, sp u) {
    sp res(c + u.a, u.b);
    return res;
}

void sp::operator-() {
    // Ð?o ngu?c d?u c?a s? ph?c
    a *= -1;
    b *= -1;
}

sp sp::operator+(sp& u) {
    // Phép c?ng hai s? ph?c
    sp res(a + u.a, b + u.b);
    return res;
}

void sp::xuat() {
    // Xu?t s? ph?c du?i d?ng a+bi
    std::cout << a << "+" << b << "i" << std::endl;
}

int main() {
    sp p1(3, 4);
    p1.xuat();

    sp p2(1, 2);
    p2.xuat();

    sp p3 = p1 + p2; // Phép c?ng hai s? ph?c
    p3.xuat();

    p3.operator-(); // Ð?o ngu?c d?u c?a s? ph?c
    p3.xuat();

    double c = 10;
    sp p4 = c + p3; // Phép c?ng gi?a m?t s? th?c và m?t s? ph?c
    p4.xuat();

    return 0;
}

