#include <bits/stdc++.h>

using namespace std;
class Mang2chieu{
	private:
		int n,m, **a;
	public:
		void xuat();
		void nhap();
		Mang2chieu(int n = 0 , int m = 0);
		~Mang2chieu();
};
void Mang2chieu::xuat(){
	for (int i = 0 ; i < m ;i++){
		for (int j = 0 ; j < n ;j++){
			 cout << a[i][j]<< " ";
		}
		cout << endl;
	}
}
void Mang2chieu::nhap(){
	if(m == 0 && n == 0){
		cin >> m>>n;
	}
	a = new int*[m];
	for (int i = 0; i < m; i++) {
			a[i] = new int[n]; // C?p phát d?ng m?t m?ng nguyên v?i kích thu?c n cho m?i con tr?
		}
	for (int i = 0 ; i < m ;i++){
		for (int j = 0 ; j < n ;j++){
			 cin >> a[i][j];
		}
	}
}
Mang2chieu::Mang2chieu(int c,int b){
	n = c;
	m = b;
	if( m == 0 && n == 0 ){
		a = NULL;
	}else{
		a= new int*[m];
		for (int i = 0; i < m; i++) {
			a[i] = new int[n]; // C?p phát d?ng m?t m?ng nguyên v?i kích thu?c n cho m?i con tr?
		}
	}
}
Mang2chieu::~Mang2chieu(){
	for (int i = 0;i < m;i++){
		delete []a;
	}
	delete []a;
	a = NULL;
}
int main(){
	Mang2chieu p;
	p.nhap();
	p.xuat();


	return 0;
}

