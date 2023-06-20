#include "diem.h"


int main(){
	
	Diem d1(3,4);
	d1.Xuat();
	Diem d2(5,3);
	cout << d2.kc(d1)<<endl;
	cout << d1;
	cout << d1+d2;
	Diem d3;
	d3 += d1;
	cout << d3;
	return 0;
}
