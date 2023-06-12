// Constructor and Destructor
#include <bits/stdc++.h>

using namespace std;

class A {
    protected:
        int protectedA; // protected member variable
    private:
        int privateA; // private member variable
    public:
        A(int t1 = 0, int t2 = 0) : protectedA(t1), privateA(t2) {}; // constructor with default values
        void showvalue(); // member function declaration
        ~A(); // destructor declaration
};

void A::showvalue() {
    cout << "Show Value Function A" << endl;
    // Function implementation is missing
}

A::~A() {
    cout << "End Function A" << endl;
}

class B : public A { // B publicly inherits from A
    protected:
        int protectedB; // additional protected member variable in B
    private:
        int privateB; // additional private member variable in B
    public:
        void show(); // member function declaration
        ~B(); // destructor declaration
};

void B::show() {
    cout << "Show Value Function B" << endl;
    // Function implementation is missing
}

B::~B() {
    cout << "End Function B" << endl;
}

int main() {
    B b1; // creating an object of class B
    b1.show(); // calling the show() function for object b1

    return 0;
}

