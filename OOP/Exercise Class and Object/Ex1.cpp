#include <iostream>
#include <cmath>

using namespace std;

class Diem {
private:
    double x, y;

public:
    Diem(double x, double y) : x(x), y(y) {}

    void xuat();
    double khoangcach(Diem& u);
    Diem(Diem A, Diem B, Diem C);
    bool checkthuoc(Diem A, Diem B, Diem C);
};

Diem::Diem(Diem A, Diem B, Diem C) {
    if ((C.y - A.y) / (C.x - A.x) == (B.y - A.y) / (B.x - A.x)) {
        cout << "Thang Hang" << endl;
    }
    else {
        cout << "Khong Thang Hang" << endl;
    }
    double AB, BC, AC;
    AB = A.khoangcach(B);
    BC = B.khoangcach(C);
    AC = A.khoangcach(C);
    double p = AB + BC + AC;
    cout << "Chu vi tam giac : " << p << endl;
    double P = p / 2;
    double S = sqrt(P * (P - AB) * (P - BC) * (P - AC));
    cout << "Dien tich tam giac: " << S << endl;
}

bool Diem::checkthuoc(Diem A, Diem B, Diem C) {
    double PAB = A.khoangcach(*this) + B.khoangcach(*this) + A.khoangcach(B);
    double PAC = A.khoangcach(*this) + C.khoangcach(*this) + A.khoangcach(C);
    double PBC = B.khoangcach(*this) + C.khoangcach(*this) + B.khoangcach(C);
    double ABC = A.khoangcach(B) + B.khoangcach(C) + A.khoangcach(C);
    
    if (PAB + PAC + PBC == ABC) {
        return true;
    }

    return false;
}

double Diem::khoangcach(Diem& u) {
    return sqrt(pow(u.x - x, 2) + pow(u.y - y, 2));
}

void Diem::xuat() {
    cout << x << " " << y << endl;
}

int main() {
    Diem A(1, 3);
    Diem B(3, 4);
    Diem C(3, 5);
    Diem P(2, 4);

    A.xuat();
    cout << A.khoangcach(B) << endl;

    Diem th(A, B, C);

    bool isInside = P.checkthuoc(A, B, C);

    if (isInside) {
        cout << "Diem P thuoc trong tam giac ABC" << endl;
    }
    else {
        cout << "Diem P khong thuoc trong tam giac ABC" << endl;
    }

    return 0;
}

