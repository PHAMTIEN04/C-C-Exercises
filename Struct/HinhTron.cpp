#include <bits/stdc++.h>
using namespace std;

struct Tam {
    int x, y;
};

struct HinhTron {
    Tam tam;
    int r;
};

void nhapHinhTron(HinhTron ht[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Hinh Tron " << i + 1 << endl;
        cout << "Toa Do Tam : ";
        cin >> ht[i].tam.x >> ht[i].tam.y;
        cout << "Ban Kinh : ";
        cin >> ht[i].r;
    }
}

void xuatHinhTron(HinhTron ht[], int n) {
    for (int i = 0; i < n; i++) {
        if (ht[i].r < 10) {
            cout << "Hinh Tron " << i + 1 << endl;
            cout << "Toa Do Tam : (" << ht[i].tam.x << "," << ht[i].tam.y << ")" << endl;
            cout << "Ban Kinh : " << ht[i].r << endl;
        }
    }
}

double khoangcach(double x1, double y1, double x2, double y2, double r) {
    return abs(sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) - r);
}

void nhaptoado(Tam &t) {
    cout << "Nhap toa do : ";
    cin >> t.x >> t.y;
}

void checkht(Tam t, HinhTron ht[], int n) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        double d = khoangcach(t.x, t.y, ht[i].tam.x, ht[i].tam.y, ht[i].r);
        if (d <= 0 || d <= 10) {
            found = true;
            break;
        }
    }
    if (found) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
void danhSachKhongGiaoNhau(HinhTron ht[], int n) {
    vector<HinhTron> khongGiaoNhau;
    for (int i = 0; i < n; i++) {
        bool giaoNhau = false;
        for (int j = i + 1; j < n; j++) {
            double d = khoangcach(ht[i].tam.x, ht[i].tam.y, ht[j].tam.x, ht[j].tam.y, ht[i].r + ht[j].r);
            if (d <= 0) {
                giaoNhau = true;
                break;
            }
        }
        if (!giaoNhau) {
            khongGiaoNhau.push_back(ht[i]);
        }
    }

    cout << "Danh sach cac hinh tron khong giao nhau la:" << endl;
    for (HinhTron h : khongGiaoNhau) {
        cout << "Toa Do Tam : (" << h.tam.x << "," << h.tam.y << ")" << endl;
        cout << "Ban Kinh : " << h.r << endl;
    }
}

int main() {
    int n;
    cout << "Nhap so luong hinh tron : ";
    cin >> n;

    if (n <= 100) {
        HinhTron ht[n];
        nhapHinhTron(ht, n);
        xuatHinhTron(ht, n);

        Tam t;
        nhaptoado(t);
        checkht(t, ht, n);
        danhSachKhongGiaoNhau(ht,n);
    }

    return 0;
}
