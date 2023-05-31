#include <bits/stdc++.h>

using namespace std;
class Diem{
	private:
		double x,y;
	public:
		void khoitao(double x = 0, double y = 0);
		void xuat();
};
void Diem::khoitao(double a,double b){
	x = a;
	y = b;
}
void Diem::xuat(){
	cout << x << " "<< y<<endl;
}
int main(){
	Diem p1;
	p1.khoitao();
	p1.xuat();


	return 0;
}

