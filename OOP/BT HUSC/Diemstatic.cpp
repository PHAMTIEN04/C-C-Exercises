#include <iostream>
using namespace std;
class Diem{
	int x,y;
	static int dem;
public:	
	Diem(){
		x=0;y=0;dem++;
	}
	Diem(int ox,int oy){
		x=ox;y=oy;dem++;
	}
	void diChuyen(int,int);
	void hienThi();
	int getX();   
	int getY();
	void setX(int xx);
	void setY(int yy);
	static void inSoDiem(){
		cout<<"Co "<<dem<<" doi tuong Diem duoc khoi tao"<<endl;
	}
};
int Diem::dem=0;
int Diem::getX(){
	return y;
}
int Diem::getY(){
	return y;
}
void Diem::setX(int xx){
	x=xx;
}
void Diem::setY(int yy){
	y=yy;
}
void Diem::hienThi(){
	cout<<"Toa do diem: x="<<x<<" va y="<<y<<endl;
}
void Diem::diChuyen(int dx,int dy){
	x=x+dx; y=y+dy;
}

int main(){
	Diem d1(4,6),d2(5,9);
	d1.hienThi();
	Diem::inSoDiem();
	d1.diChuyen(2,3);
	d1.hienThi();
	d2.setY(10);
	d2.hienThi();
	Diem::inSoDiem();
}
