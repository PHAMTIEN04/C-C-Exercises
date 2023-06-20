#include "complex.h"


int main(){
	Complex c1(3,4);
	c1.xuat();
	Complex c2(5,6);
	Complex c3(3,4);
	c3 + c2;
	c3.xuat();
	c3 - c1;
	c3.xuat();
	c3 * c2;
	c3.xuat();
	c3 / c2;
	c3.xuat();
	cout << c3;
	return 0;
}
