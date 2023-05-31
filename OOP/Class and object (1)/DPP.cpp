#Su khac nhau giua private va public
#include <bits/stdc++.h>

using namespace std;
class Person {
private:
    string firstName;  // private thành viên
public:
    string lastName;   // public thành viên

    void setFirstName(string name) {
        firstName = name;  // private thành viên có th? truy c?p t? bên trong cùng l?p
    }

    void displayFullName() {
        cout << firstName << " " << lastName << endl;  // private và public thành viên có th? truy c?p t? bên trong cùng l?p
    }
};

int main() {
    Person p;
    p.lastName = "Smith";  // public thành viên có th? truy c?p t? bên ngoài l?p
    p.setFirstName("John");  // private thành viên ch? có th? truy c?p t? bên trong cùng l?p
    p.displayFullName();  // public thành viên có th? truy c?p t? bên ngoài l?p

    return 0;
}


