#ifndef date_h
#define date_h

#include "iostream"
using namespace std;

class Date{
	private:
		int day,month,year;
	public:
		Date(int day=0,int month = 0,int year=0):day(day),month(month),year(year){};
		void xuat();
		bool IsLeapYear();
		int GetDayInMonth();
			
	
};













#endif
