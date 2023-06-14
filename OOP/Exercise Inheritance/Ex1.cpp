#include <bits/stdc++.h>

using namespace std;
#define PI 3.14
class Shape{

	public:
		virtual double calculateArea()=0;
		virtual double calculatePerimeter() = 0;
		virtual double calculateVolume() = 0;
};
//Cricle
class Cricle:public Shape {
	private:
		double cx,cy;
		double cr;
	public:
		void IRadius();
		void ORadius();
		void IHeart();
		void OHeart();
		double calculateArea();
		double calculatePerimeter();
		double calculateVolume();
};
void Cricle::IRadius(){
	cout << "Input Radius: "; cin >> cr;
}
void Cricle::ORadius(){
	cout << "Radius: " << cr << endl;
}
void Cricle::IHeart(){
	cout << "Input Heart: "<<endl;
	cout << "Heart x: "; cin >> cx;
	cout << "Heart y: "; cin >> cy;
}
void Cricle::OHeart(){
	cout << "Heart: ("<<cx<<","<< cy<<")"<<endl;
}
double Cricle::calculateArea(){
	return PI*(pow(cr,2));
}
double Cricle::calculatePerimeter(){
	return 2*PI*cr;
}
double Cricle::calculateVolume(){
	return 0;
}
//Square
class Square: public Shape{
	private:
		double sqa;
	public:
		void IEdge();
		double calculateArea();
		double calculatePerimeter();
		double calculateVolume();
};
void Square::IEdge(){
	cout<<"Input Edge: "; cin >> sqa;
}
double Square::calculateArea(){
	return pow(sqa,2);
}
double Square::calculatePerimeter(){
	return 4*sqa;
}
double Square::calculateVolume(){
	return 0;
}
//Rectangle
class Rectangle:public Shape {
	private:
		double ri,rw;
	public:
		void ILengthwidth();
		double calculateArea();
		double calculatePerimeter();
		double calculateVolume();
};
void Rectangle::ILengthwidth(){
	cout << "Input Length: "; cin >> ri;
	cout << "Input Width: "; cin >> rw;
}
double Rectangle::calculateArea(){
	return ri*rw;
}
double Rectangle::calculatePerimeter(){
	return 2*(ri+rw);
}
double Rectangle::calculateVolume(){
	return 0;
}
//Ellipse
class Ellipse: public Shape{
	private:
		double ea,eb;
	public:
		void I_m_shafta_shaft();
		double calculateArea();
		double calculatePerimeter();
		double calculateVolume();
};
void Ellipse::I_m_shafta_shaft(){
	cout <<"Input Man Shaft: "; cin >>ea;
	cout <<"Input Auxiliary Shaft: "; cin >> eb;
	
}
double Ellipse::calculateArea(){
	return PI*ea*eb;
}
double Ellipse::calculatePerimeter(){
	return 2*PI*sqrt((pow(ea,2)+pow(eb,2))/2);
}
double Ellipse::calculateVolume(){
	return 0;
}
//Sphere
class Sphere: public Shape{
	private:
		double spr;
	public:
		void IRadius();
		double calculateArea();
		double calculatePerimeter();
		double calculateVolume();
};
void Sphere::IRadius(){
	cout << "Input Radius: "; cin >> spr;
}
double Sphere::calculateArea(){
	return 4*PI*(pow(spr,2));
}
double Sphere::calculateVolume(){
	return (4/3)*PI*(pow(spr,3));
}
double Sphere::calculatePerimeter(){
	return 0;
}
int main(){
	cout << "**Cricle**"<<endl;
	Cricle c1;
	c1.IRadius();
	cout <<"Area: " <<c1.calculateArea()<<endl;
	cout <<"Perimeter: "<<c1.calculatePerimeter()<<endl;
	cout << "**Square**"<<endl;
	Square sq1;
	sq1.IEdge();
	cout << "Area: " <<sq1.calculateArea()<<endl;
	cout << "Perimeter: "<<sq1.calculatePerimeter()<<endl;
	cout << "**Rectangle**"<<endl;
	Rectangle r1;
	r1.ILengthwidth();
	cout <<"Area: " <<r1.calculateArea()<<endl;
	cout <<"Perimeter: "<<r1.calculatePerimeter()<<endl;
	cout << "**Ellipse**"<<endl;
	Ellipse e1;
	e1.I_m_shafta_shaft();
	cout <<"Area: " <<e1.calculateArea()<<endl;
	cout <<"Perimeter: "<<e1.calculatePerimeter()<<endl;
	cout << "**Sphere**"<<endl;
	Sphere sp1;
	sp1.IRadius();
	cout <<"Area: " << sp1.calculateArea()<<endl;
	cout <<"Volume: "<< sp1.calculateVolume()<<endl;

	return 0;
}

