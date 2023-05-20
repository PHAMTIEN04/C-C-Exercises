#include <iostream>
#include <string>

using namespace std;
int sumDigits(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}

int main() {
   string date;
    getline(std::cin, date);

    string dayStr = date.substr(0, 2);
   	string monthStr = date.substr(3, 2);
    string yearStr = date.substr(6, 4);

    int day = stoi(dayStr);
    int month = stoi(monthStr);
    int year = stoi(yearStr);

    int daySum = sumDigits(day);
    int monthSum = sumDigits(month);
    int yearSum = sumDigits(year);

	int tongday= 

    return 0;
}

