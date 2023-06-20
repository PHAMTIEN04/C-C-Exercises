#include "teacher.h"

Teacher::Teacher(string hoten,int ssob): Person(hoten){
	this-> ssob = ssob;
}
int Teacher::DuocKhenThuong() const{
	return this->ssob >= 5;
}
void Teacher::xuat() const{
	cout <<"Hoten: "<<hoten<<endl;
}


