#include <bits/stdc++.h>

using namespace std;

class DaGiac {
protected:
    int n;
    int lcanh[100];

public:
    DaGiac(int nn = 0) {
        this->n = nn;
        if (this->n == 0) {
            cout << "Nhap so canh: ";
            cin >> n;
        }
        cout << "Nhap chieu dai cac canh\n";
        for (int i = 0; i < n; i++) {
            cout << "Canh [" << i + 1 << "]: ";
            cin >> lcanh[i];
        }
    }

    int chuvidg() {
        int P = 0;
        for (int i = 0; i < n; i++) {
            P = P + lcanh[i];
        }
        return P;
    }
};

class TamGiac : public DaGiac {
protected:
    int a, b, c;

public:
    TamGiac() : DaGiac(3) {
        this->a = lcanh[0];
        this->b = lcanh[1];
        this->c = lcanh[2];
    }

    float dientich();
    void loaitg();
};

float TamGiac::dientich() {
    cout << "Dien tich tam giac: ";
    float s, p;
    p = this->chuvidg() / 2.0;
    if (a < b + c && b < a + c && c < a + b) {
        s = sqrt(p * (p - a) * (p - b) * (p - c));
    } else {
        s = 0;
    }
    return s;
}

void TamGiac::loaitg() {
    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && a == c) {
            cout << "Tam giac deu\n";
        } else if (a == b || a == c || b == c) {
            cout << "Tam giac can\n";
        } else {
            cout << "Tam giac thuong\n";
        }
    } else {
        cout << "Khong phai canh tam giac\n";
    }
}

class TamGiacVuong : public TamGiac {
private:
    float canhH;

public:
    TamGiacVuong() { 
        cout << "Nhap chieu dai canh huyen: ";
        cin >> canhH;
    }

    float dienTichtgv() {
        cout << "Dien tich tam giac vuong: ";
        float s = 0.5 * b * canhH;
        return s;
    }

    float doDaiDuongCao() {
        cout << "Do dai duong cao tu dinh goc vuong: ";
        float h = (b * canhH) / b;
        return h;
    }
};

int main() {
    // TamGiac t;
    // t.loaitg();
    // cout << t.dientich() << endl;

    TamGiacVuong tgVuong;
    cout << tgVuong.dienTichtgv() << endl;
    cout << tgVuong.doDaiDuongCao() << endl;

    return 0;
}

