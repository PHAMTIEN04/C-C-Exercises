#ifndef teacher_h
#define teacher_h

#include "person.h"

class Teacher: public Person{
	protected:
		int ssob;
	public:
		Teacher(string hoten ="",int ssob =0);
		virtual int DuocKhenThuong() const;
		virtual void xuat() const;
};


#endif
