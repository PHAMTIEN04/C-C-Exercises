#ifndef complex_h
#define complex_h

#include "iostream"
using namespace std;

class Complex{
	private:
		double a,bi;
	public:
		Complex(double a = 0,double bi =0):a(a),bi(bi){};
		void operator+(Complex &u);
		void operator-(Complex &v);
		void operator*(Complex &c);
		void operator/(Complex &m);
		friend istream& operator>>(istream &is,Complex &u);
		friend ostream& operator<<(ostream &os,Complex &v);
		void xuat();
};











#endif
