#ifndef student_h
#define student_h

#include "person.h"

class Student:public Person{
	protected:
		double DTB;
	public:
		Student(string hoten="",double DTB =0);
		virtual int DuocKhenThuong() const;
		virtual void xuat() const;
};

#endif







