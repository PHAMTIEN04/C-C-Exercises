#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct Diemhp {
    float QTHT;
    float DiemThi;
};

void nhap(Diemhp hp[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> hp[i].QTHT >> hp[i].DiemThi;
    }
}

void Out_KTHP(Diemhp hp[], int n) {
    float diemkthp = 0;
    for (int i = 0; i < n; i++) {
        diemkthp = (hp[i].QTHT * 0.4) + (hp[i].DiemThi * 0.6);
        diemkthp = round(diemkthp * 10) / 10; // Làm tròn giá tr? d?n 1 ch? s? th?p phân

        if (diemkthp < 4.0) {
            cout << setprecision(1) << fixed << diemkthp << " F" << endl;
        } else if (diemkthp >= 4.0 && diemkthp <= 5.4) {
            cout << setprecision(1) << fixed << diemkthp << " D" << endl;
        } else if (diemkthp >= 5.5 && diemkthp <= 6.9) {
            cout << setprecision(1) << fixed << diemkthp << " C" << endl;
        } else if (diemkthp >= 7.0 && diemkthp <= 8.4) {
            cout << setprecision(1) << fixed << diemkthp << " B" << endl;
        } else if (diemkthp >= 8.5 && diemkthp <= 10.0) {
            cout << setprecision(1) << fixed << diemkthp << " A" << endl;
        }
    }
}

int main() {
    int n;
    cin >> n;
    Diemhp hp[n];
    nhap(hp, n);
    Out_KTHP(hp, n);

    return 0;
}

