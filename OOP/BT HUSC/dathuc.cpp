#include <iostream>
#include <cmath>
using namespace std;

class DaThuc {
private:
    int n;
    int *a;
    int x;

public:
    DaThuc(int nn = 0) {
        n = nn;
        a = new int[n];
    }

    int setX(int xx) {
        x = xx;
        return x;
    }

    void Input() {
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
    }

    void Output() {
        for (int i = 0; i < n; i++) {
            if (i != n - 1) {
                cout << a[i] << "x^" << n - i << "+";
            } else {
                cout << a[i] << "x^" << n - i;
            }
        }
        cout << endl;
    }

    int Tinhdt() {
        int s = 0;
        for (int i = 0; i < n; i++) {
            s += a[i] * pow(x, n - i);
        }
        return s;
    }

    DaThuc congtdt(DaThuc dt) {
        int maxN = max(n, dt.n);
        DaThuc result(maxN);

        for (int i = 0; i < maxN; i++) {
            if (i < n && i < dt.n) {
                result.a[i] = a[i] + dt.a[i];
            } else if (i < n) {
                result.a[i] = a[i];
            } else {
                result.a[i] = dt.a[i];
            }
        }

        return result;
    }

    DaThuc trudt(DaThuc dt) {
        int maxN = max(n, dt.n);
        DaThuc result(maxN);

        for (int i = 0; i < maxN; i++) {
            if (i < n && i < dt.n) {
                result.a[i] = a[i] - dt.a[i];
            } else if (i < n) {
                result.a[i] = a[i];
            } else {
                result.a[i] = -dt.a[i];
            }
        }

        return result;
    }
};

int main() {
    DaThuc dt1(5);
    cout << "Nhap da thuc thu nhat:\n";
    dt1.Input();
    cout << "Da thuc thu nhat: ";
    dt1.Output();

    DaThuc dt2(4);
    cout << "Nhap da thuc thu hai:\n";
    dt2.Input();
    cout << "Da thuc thu hai: ";
    dt2.Output();

    dt1.setX(2);
    cout << "Tinh da thuc thu nhat tai x = 2: " << dt1.Tinhdt() << endl;

    DaThuc tong = dt1.congtdt(dt2);
    cout << "Tong cua hai da thuc: ";
    tong.Output();

    DaThuc hieu = dt1.trudt(dt2);
    cout << "Hieu cua hai da thuc: ";
    hieu.Output();

    return 0;
}

