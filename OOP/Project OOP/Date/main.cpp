#include "date.h"

int main(){
	int day,month,year;
	cout << "Input Day: ";
	cin >> day;
	cout << "Input Month: ";
	cin >> month;
	cout << "Input Year: ";
	cin >> year;
	
	Date d1(day,month,year);
	d1.xuat();
	cout <<"Day in month: "<<d1.GetDayInMonth()<< endl;
	cout <<"Is Leap Year: "<<(d1.IsLeapYear() ? "Yes" : "No" )<<endl;
	
	
	
	
	
	return 0;
}
