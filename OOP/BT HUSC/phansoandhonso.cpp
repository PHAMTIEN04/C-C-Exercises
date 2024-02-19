#include <iostream>
#include <vector>

using namespace std;

class PHANSO {
protected:
    int tu, mau;

public:
    PHANSO(int tu = 0, int mau = 1) : tu(tu), mau(mau) {};

    void nhap() {
        int t_check;
        cout << "Nhap tu: ";
        cin >> t_check;
        cin.ignore();
        int m_check;
        cout << "Nhap mau: ";
        cin >> m_check;
        cin.ignore();
        if (m_check > 0) {
            this->tu = t_check;
            this->mau = m_check;
        }
    }

    void hienthi() {
        cout << this->tu << "/" << this->mau << endl;
    }

    friend PHANSO operator +(PHANSO ps1, PHANSO ps2) {
        PHANSO p;
        p.tu = ps1.tu * ps2.mau + ps2.tu * ps1.mau;
        p.mau = ps1.mau * ps2.mau;
        return p;
    }

    friend PHANSO operator +(PHANSO ps1, int num) {
        PHANSO p;
        p.tu = num * ps1.mau + ps1.tu;
        p.mau = ps1.mau;
        return p;
    }

    bool operator >(const PHANSO& other) {
        return (static_cast<double>(this->tu) / this->mau) > (static_cast<double>(other.tu) / other.mau);
    }
};

class HONSO : public PHANSO {
private:
    int phannguyen;

public:
    HONSO(int phannguyen = 0, int tu = 0, int mau = 1) : phannguyen(phannguyen), PHANSO(tu, mau) {};

    void nhap() {
        PHANSO::nhap();
        cout << "Nhap phan nguyen: ";
        cin >> this->phannguyen;
        cin.ignore();
    }

    void hienthi() {
        cout << this->phannguyen << "." << this->tu << "/" << this->mau << endl;
    }

    friend HONSO operator +(HONSO hs1, HONSO hs2) {
        HONSO h;
        h.tu = ((hs1.phannguyen * hs1.mau + hs1.tu) * hs2.mau) + ((hs2.phannguyen * hs2.mau + hs2.tu) * hs1.mau);
        h.mau = hs1.mau * hs2.mau;
        return h;
    }

    bool operator >(const HONSO& other) {
        return ((this->phannguyen * this->mau + this->tu) / this->mau) > ((other.phannguyen * other.mau + other.tu) / other.mau);
    }

    bool operator <(const HONSO& other) {
        return ((this->phannguyen * this->mau + this->tu) / this->mau) < ((other.phannguyen * other.mau + other.tu) / other.mau);
    }
};

int main() {
    int n;
    cout << "Nhap so luong hon so (n <= 50): ";
    cin >> n;

    if (n <= 0 || n > 50) {
        cout << "So luong khong hop le." << endl;
        return 1;
    }

    vector<HONSO> danhSachHonSo;
    HONSO honSoMax, honSoMin, tongHonSo;

    for (int i = 0; i < n; ++i) {
        HONSO honSo;
        cout << "Nhap hon so thu " << i + 1 << ": " << endl;
        honSo.nhap();
        danhSachHonSo.push_back(honSo);

        tongHonSo = tongHonSo + honSo;

        if (i == 0 || honSo > honSoMax) {
            honSoMax = honSo;
        }

        if (i == 0 || honSo < honSoMin) {
            honSoMin = honSo;
        }
    }

    cout << "Tong cua " << n << " hon so: ";
    tongHonSo.hienthi();

    cout << "Hon so lon nhat: ";
    honSoMax.hienthi();
    cout << "Hon so nho nhat: ";
    honSoMin.hienthi();

    return 0;
}

