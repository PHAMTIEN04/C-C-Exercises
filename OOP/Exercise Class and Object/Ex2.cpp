#include <iostream>
using namespace std;

class mang1chieu {
private:
    int n;
    int* b;

public:
    mang1chieu(int i = 0) : n(i) {
        b = new int[i];
    }

    void nhap() {
        if (n == 0) {
            cin >> n;
        }
        b = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
    }

    void xuat() {
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
   ~mang1chieu() {
	cout << "Delete";
	delete[] b; // Gi?i phóng b? nh? dã c?p phát d?ng cho m?ng
	b = NULL; // Gán con tr? a thành nullptr d? tránh truy c?p l?i
}
	void sort(){
		for(int i = 0; i< n-1 ;i++){
			for(int j= i+ 1;j< n;j++ ){
				if(b[i] > b[j]){
					int temp = b[i];
					b[i] = b[j];
					b[j] = temp;
				}
			}
		}
		for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
	}
	void maxmin(){
		int max = b[0];
		int min = b[0];
		for(int i = 1 ; i < n ;i++){
			if(max < b[i]){
				max = b[i];
			}
			if(min > b[i]){
				min = b[i];
			}
		}
		cout <<"Max: "<< max<< endl;
		cout <<"Min: "<< min<< endl;
	}
};

class mang2chieu {
private:
    int m, n;
    int** a;

public:
    mang2chieu(int c = 0, int d = 0) : m(c), n(d) {
        if (m == 0 && n == 0) {
            a = NULL;
        }
        else {
            a = new int*[m];
            for (int i = 0; i < m; i++) {
                a[i] = new int[n];
            }
        }
    }

    void nhap() {
        if (m == 0 && n == 0) {
            cin >> m >> n;
        }
        a = new int*[m];
        for (int i = 0; i < m; i++) {
            a[i] = new int[n];
        }
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }
    }

    void xuat() {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    
    ~mang2chieu() {
        for (int i = 0; i < m; i++) {
            delete[] a[i];
        }
        delete[] a;
    }
void sort() {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            for (int k = i; k < m; k++) {
                int start = (k == i) ? j + 1 : 0; // B?t d?u t? v? trí h+1 trong hàng d?u tiên, ho?c t? d?u hàng ti?p theo
                for (int h = start; h < n; h++) {
                    if (a[i][j] > a[k][h]) {
                        int temp = a[i][j];
                        a[i][j] = a[k][h];
                        a[k][h] = temp;
                    }
                }
            }
        }
    }
}
void maxmin(){
	int max = a[0][0];
	int min = a[0][0];
	for(int i = 0;i < m;i++){
		for(int j = 0;j < n;j++){
			if(max < a[i][j]){
				max = a[i][j];
			}
			if(min > a[i][j]){
				min = a[i][j];
			}
		}
	}
		cout <<"Max: "<< max<< endl;
		cout <<"Min: "<< min<< endl;
}
};
int main() {
	cout << "Thao tac mang 1 chieu :\n";
    mang1chieu m(3);
    m.nhap();
    m.xuat();
	m.sort();
	m.maxmin();
	cout << "Thao tac mang 2 chieu :\n";
    mang2chieu m2(3, 4);
    m2.nhap();
    m2.xuat();
	m2.sort();
	m2.xuat();
	m2.maxmin();
    return 0;
}

