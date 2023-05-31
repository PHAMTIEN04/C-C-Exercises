#include <bits/stdc++.h>

using namespace std;
class Diem{
	private:
		double x,y;
	public:
		void xuat();
		void khoitao(double a = 0,double b = 0);
		double kc(Diem u);
		double chuvi(Diem u,Diem v);
		double Dientich(Diem u,Diem v);
};
void Diem::khoitao(double a,double b){
	this->x = a;
	this->y = b;
}
double Diem::kc(Diem u){
	return sqrt(pow(u.x-x,2)+ pow(u.y-y,2));
}
double Diem::chuvi(Diem u ,Diem v){
	double canh1 = this -> kc(u);
	double canh2 = u.kc(v);
	double canh3 = v.kc(*this);
	return canh1 + canh2 + canh3;
}
double Diem::Dientich(Diem u, Diem v){
	double p = this->chuvi(u,v)/2;
	double a = this->kc(u);
	double b = u.kc(v);
	double c = v.kc(*this);
	return sqrt(p*(p-a)*(p-b)*(p-c));
}
void Diem::xuat(){
	cout << x << " "<< y << endl;
}
int main(){
	Diem p1,p2,p3;
	p1.khoitao();
	p2.khoitao(3,0);
	p3.khoitao(0,4);
	cout << p1.chuvi(p2,p3)<<endl;
	cout << p1.Dientich(p2,p3)<<endl;



	return 0;
}

