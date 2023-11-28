#include <iostream>
#include <string>
using namespace std;

class Phone {
private:
    string namephone, hangsx;
    int giagoc, namxh;

public:
    Phone(string namephone = "", string hangsx = "", int giagoc = 0, int namxh = 0) {
        this->namephone = namephone;
        this->hangsx = hangsx;
        this->giagoc = giagoc;
        this->namxh = namxh;
    }

    string getnp() {
        return this->namephone;
    }

    string gethxs() {
        return this->hangsx;
    }

    int getgg() {
        return this->giagoc;
    }

    int getnxh() {
        return this->namxh;
    }

    void nhap() {
        if (this->namephone == "" && this->hangsx == "" && this->giagoc == 0 && this->namxh == 0) {
            cout << "Nhap Thong Tin\n";
            cout << "Ten dien thoai: ";
            getline(cin, this->namephone);
            cout << "Hang san xuat: ";
            getline(cin, this->hangsx);
            cout << "Gia goc: ";
            cin >> this->giagoc;
            cin.ignore();
            cout << "Nam xuat hien: ";
            cin >> this->namxh;
            cin.ignore();
        }
    }

    void hienthi() {
        cout << "Hien Thi Thong Tin\n";
        cout << "Ten dien thoai: " << this->namephone << endl;
        cout << "Hang san xuat: " << this->hangsx << endl;
        cout << "Gia goc: " << this->giagoc << endl;
        cout << "Nam xuat hien: " << this->namxh << endl;
    }

    bool operator>(Phone &b) {
        return namephone > b.namephone;
    }
};

class SmartPhone : public Phone {
private:
    float tdchip, kichthuocmh,giahienhanh;
    int socamera,sonamxh;

public:
    SmartPhone(float tdchip = 0, float kichthuocmh = 0, int socamera = 0)
        : Phone("", "", 0, 0) { // Call Phone constructor in the initializer list
        this->tdchip = tdchip;
        this->kichthuocmh = kichthuocmh;
        this->socamera = socamera;
    }

    float gettdc() {
        return this->tdchip;
    }

    float getktmh() {
        return this->kichthuocmh;
    }
    float getghh(){
    	return this->giahienhanh;
	}

    int getsc() {
        return this->socamera;
    }

    void nhapsm() {
        Phone::nhap(); 
        if (this->tdchip == 0 && this->kichthuocmh == 0 && this->socamera == 0) {
            cout << "Toc do Chip: ";
            cin >> this->tdchip;
            cin.ignore();
            cout << "Kich thuoc man hinh: ";
            cin >> this->kichthuocmh;
            cin.ignore();
            cout << "So camera: ";
            cin >> this->socamera;
            cin.ignore();
        }
    }

    void hienthism() {
        Phone::hienthi(); 
        cout << "Toc do Chip: " << this->tdchip << endl;
        cout << "Kich thuoc man hinh: " << this->kichthuocmh << endl;
        cout << "So camera: " << this->socamera << endl;
        this->sonamxh = 2023 - this->getnxh();
        this->giahienhanh = this->getgg() - (this->sonamxh*(2.0/100)*this->getgg());
        if(this->giahienhanh< 0){
        	this->giahienhanh =0;
		}
		cout << "So nam xuat hien: " << this->sonamxh << endl;
        cout << "Gia hien hanh: "<< this->giahienhanh << endl;
    }
};
class QuanLySmartPhone{
	private:
		int n;
		SmartPhone a[50];
	public:
		QuanLySmartPhone(int nn = 0){
			this->n = nn;
			if(n == 0){
				cout << "Nhap So Luong SmartPhone: ";
				cin >> this->n;
				cin.ignore();
			}
			for(int i = 0; i < this->n ;i++){
				cout << "SmartPhone [" << i + 1 << "]\n";
				a[i].nhapsm();
			}
		}
		void output(){
			cout << endl;
			for(int i = 0 ; i < n ;i++){
				cout << "SmartPhone [" << i + 1 << "]\n";
				a[i].hienthism();
			}
		}
		void sapxepdt(){
			for(int i = 0 ; i < n-1;i++){
				for(int j = i + 1; j < n;j++){
					if(a[i].getnp() > a[j].getnp()){
						SmartPhone tmp;
						tmp = a[i];
						a[i] = a[j];
						a[j] = tmp;
				}
					
					
				}
			}
			output();
		}
		void maxdt(){
			cout << "\nGia tri con lai cao nhat\n";
			float max = a[0].getghh();
			for(int i = 1; i < n ; i++){
				if(max < a[i].getghh()){
					max = a[i].getghh();
				}
			}
			for (int i = 0;i < n ;i++){
				if(a[i].getghh()== max){
					cout << "SmartPhone [" << i + 1 << "]\n";
					a[i].hienthism();
				}
			}
		}
};
int main() {
	QuanLySmartPhone a;
	a.sapxepdt();
	a.maxdt();

    return 0;
}

