#ifndef person_h
#define person_h

#include "iostream"

using namespace std;

class Person{
	protected:
		string hoten;
	public:
		Person(string hoten =""):hoten(hoten){};
		virtual int DuocKhenThuong() const =0;
		virtual void xuat() const = 0;
};


#endif

