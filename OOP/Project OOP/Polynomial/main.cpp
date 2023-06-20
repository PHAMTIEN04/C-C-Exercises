#include "polynomial.h"

int main(){
	int b[] ={1,2,3};
	int c[] ={3,4};
	Polynomial p1(b,3);
	p1.printPolynomial();
	Polynomial p2(c,2);
	cout << "ADD: ";
	p1 + p2;
	p1.printPolynomial();
	cout <<	"SUB: ";
	p2 - p1;
	p2.printPolynomial();
	cout << "MUL: ";
	p2 * p1;
	p2.printPolynomial();
	
	
	
	return 0;
}
