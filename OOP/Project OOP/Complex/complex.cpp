#include "complex.h"

void Complex::xuat(){
	
	cout << this->a << " + " << this->bi<<"i"<<endl;
}

void Complex::operator+(Complex &u){
	this->a = this->a + u.a;
	this->bi = this->bi + u.bi;
}
void Complex::operator-(Complex &v){
	this->a= this->a - v.a;
	this->bi= this->bi- v.bi; 
}
void Complex::operator*(Complex &c){
	this->a = (this->a * c.a) -(this->bi* c.bi);
	this->bi = (this->a * c.bi) +(this->bi * c.a);
}
void Complex::operator/(Complex &m) {
    double mauso = m.a * m.a + m.bi * m.bi;
    double newA = (a * m.a + bi * m.bi) / mauso;
    double newBi = (bi * m.a - a * m.bi) / mauso;

    a = newA;
    bi = newBi;
}
istream& operator>>(istream &is,Complex &u){
	is >> u.a >> u.bi;
	return is;
}
ostream& operator<<(ostream &os,Complex &v){
	os << v.a <<" + "<< v.bi<<"i";
	return os;
}
