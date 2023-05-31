#include <bits/stdc++.h>

using namespace std;
class Diem{
	private:
		double x ,y;
	public:
		void xuat();
		Diem DoixungOx();
		void khoitao(double a = 0, double b=0);
};
void Diem::khoitao(double a , double b){
	x = a;
	y = b;
}
Diem Diem::DoixungOx(){
	Diem res;
	res.khoitao(x,-y);
	return res;
}
void Diem::xuat(){
	cout << x << " "<< y << endl;
}


int main(){
	Diem p1,p2;
	p1.khoitao(1,2);
	p2 = p1.DoixungOx();
	p1.xuat();
	p2.xuat();


	return 0;
}

