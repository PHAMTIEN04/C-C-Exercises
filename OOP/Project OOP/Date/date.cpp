#include "date.h"

bool Check(int value){
	int cnt = 0;
	int n = value;
	while(value != 0){
		value = value % 10;
		value /= 10;
		cnt++;
	}
	if(cnt == 1){
		return true;
	}
	return false;
	
	
	
}

void Date::xuat(){
	cout <<(Check(day)?"0":"")<<this->day << "/"<<(Check(day)?"0":"") <<this->month << "/" << this->year<<endl;
		
	
	
}
bool Date::IsLeapYear(){
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
		return true;
	}
	return false;
	
	
}
int Date::GetDayInMonth() {
    int dayInMonth = 0;

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            dayInMonth = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            dayInMonth = 30;
            break;
        case 2:
            if (IsLeapYear()) {
                dayInMonth = 29;
            } else {
                dayInMonth = 28;
            }
            break;
    }

    return dayInMonth;
}

