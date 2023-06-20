#ifndef polynomial_h
#define polynomial_h


#include "iostream"
using namespace std;

class Polynomial{
	private:
		int *a;
		int size;
	public:
		Polynomial(int *a,int n);
		~Polynomial();
		void operator+(Polynomial &u);
		void operator-(Polynomial &v);
		void operator*(Polynomial &m);
		void printPolynomial();
};







#endif
