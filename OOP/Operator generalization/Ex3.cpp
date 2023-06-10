//CHONG TOAN TU NHAP VA XUAT
#include <iostream>

class diem {
private:
    double a, b;

public:
    // To�n t? nh?p (istream) d? nh?p gi� tr? cho d?i tu?ng diem
    friend istream& operator>>(istream& is, diem& u);

    // To�n t? xu?t (ostream) d? xu?t gi� tr? c?a d?i tu?ng diem
    friend ostream& operator<<(ostream& os, diem e);
};

// �?nh nghia to�n t? nh?p (istream) cho d?i tu?ng diem
istream& operator>>(istream& is, diem& u) {
    is >> u.a >> u.b;
    return is;
}

// �?nh nghia to�n t? xu?t (ostream) cho d?i tu?ng diem
ostream& operator<<(ostream& os, diem e) {
    os << e.a << " " << e.b << endl;
    return os;
}

int main() {
    diem a;
    cin >> a;   // Nh?p gi� tr? cho d?i tu?ng diem a
    cout << a;  // Xu?t gi� tr? c?a d?i tu?ng diem a

    return 0;
}

