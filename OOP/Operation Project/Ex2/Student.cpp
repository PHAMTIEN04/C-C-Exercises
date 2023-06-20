#include "person.h"
#include "student.h"

Student::Student(string hoten,double DTB) : Person(hoten){
	this->DTB = DTB;
}
int Student::DuocKhenThuong() const{
	return this->DTB >= 9;
}
void Student::xuat() const{
	cout << "Hoten: " << hoten<< endl;
}
