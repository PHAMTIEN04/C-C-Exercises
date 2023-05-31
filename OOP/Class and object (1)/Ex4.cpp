#include <bits/stdc++.h>

using namespace std;
class Diem {
	private:
		double x ,y;
	public:
		void khoitao(double a = 0,double b = 0);
		void xuat();
		void checktrung(Diem u);
		double kc(Diem u);
};
void Diem::khoitao(double a,double b){
	x = a;
	y = b;
}
void Diem::xuat(){

	cout << x << " "<< y << endl;
}
void Diem::checktrung(Diem u){
	if(u.x == x && u.y == y){
		cout << "Trung nhau" <<endl;
	}
	else{
		cout <<"Khong trung"<<endl;
	}
}
double Diem::kc(Diem u){
	return sqrt((pow(u.x -x,2))+(pow(u.y-y,2)));
} 
int main(){
	Diem p1,p2;
	p1.khoitao();
	p2.khoitao(3,2);
	p1.checktrung(p2);
	cout <<p1.kc(p2);
	



	return 0;
}

