#Su khac nhau giua private va public
#include <bits/stdc++.h>

using namespace std;
class Person {
private:
    string firstName;  // private th�nh vi�n
public:
    string lastName;   // public th�nh vi�n

    void setFirstName(string name) {
        firstName = name;  // private th�nh vi�n c� th? truy c?p t? b�n trong c�ng l?p
    }

    void displayFullName() {
        cout << firstName << " " << lastName << endl;  // private v� public th�nh vi�n c� th? truy c?p t? b�n trong c�ng l?p
    }
};

int main() {
    Person p;
    p.lastName = "Smith";  // public th�nh vi�n c� th? truy c?p t? b�n ngo�i l?p
    p.setFirstName("John");  // private th�nh vi�n ch? c� th? truy c?p t? b�n trong c�ng l?p
    p.displayFullName();  // public th�nh vi�n c� th? truy c?p t? b�n ngo�i l?p

    return 0;
}


