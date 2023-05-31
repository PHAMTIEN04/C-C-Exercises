#include <bits/stdc++.h>

using namespace std;
class Diem{
	private:
		double x,y;
	public:
		void khoitao();
		void khoitao(double x);
		void khoitao(double x,double y);
		void xuat();
};
void Diem::khoitao(){
	x = 0;
	y = 0;
}
void Diem::khoitao(double a){
	x = a;
	y = 0;
}
void Diem::khoitao(double a,double b){
	x = a;
	y = b;
}
void Diem::xuat(){
	cout << x << " " << y << endl;
}
int main(){
	Diem p1,p2,p3;
	p1.khoitao();
	p2.khoitao(1);
	p3.khoitao(1,2);
	p1.xuat();
	p2.xuat();
	p3.xuat();
	


	return 0;
}

