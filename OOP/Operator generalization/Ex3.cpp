//CHONG TOAN TU NHAP VA XUAT
#include <iostream>

class diem {
private:
    double a, b;

public:
    // Toán t? nh?p (istream) d? nh?p giá tr? cho d?i tu?ng diem
    friend istream& operator>>(istream& is, diem& u);

    // Toán t? xu?t (ostream) d? xu?t giá tr? c?a d?i tu?ng diem
    friend ostream& operator<<(ostream& os, diem e);
};

// Ð?nh nghia toán t? nh?p (istream) cho d?i tu?ng diem
istream& operator>>(istream& is, diem& u) {
    is >> u.a >> u.b;
    return is;
}

// Ð?nh nghia toán t? xu?t (ostream) cho d?i tu?ng diem
ostream& operator<<(ostream& os, diem e) {
    os << e.a << " " << e.b << endl;
    return os;
}

int main() {
    diem a;
    cin >> a;   // Nh?p giá tr? cho d?i tu?ng diem a
    cout << a;  // Xu?t giá tr? c?a d?i tu?ng diem a

    return 0;
}

