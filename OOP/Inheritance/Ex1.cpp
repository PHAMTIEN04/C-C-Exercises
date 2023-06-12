//Inheritance types

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
};

void A::showvalue() {
    cout << "Show Value Function A()" << endl;
    cout << protectedA + privateA << endl;
}

class B : public A { // B publicly inherits from A
    protected:
        int protectedB; // additional protected member variable in B
    private:
        int privateB; // additional private member variable in B
    public:
        void show(); // member function declaration
};

void B::show() {
    cout << "Show Value Function B()" << endl;
    showvalue(); // accessing showvalue() function from A
    protectedB = 1; // accessing protected member variable in B
    cout << protectedB << endl;
    privateB = 10; // accessing private member variable in B
    // cout << privateB << endl; // private member cannot be accessed directly
}

class C : private A { // C privately inherits from A
    protected:
        int protectedC; // additional protected member variable in C
    private:
        int privateC; // additional private member variable in C
    public:
        void show(); // member function declaration
};

void C::show() {
    cout << "Show Value Function C()" << endl;
    showvalue(); // accessing showvalue() function from A
    protectedA = 1; // accessing protected member variable in C
    cout << protectedA << endl;
    // privateC = 2; // private member cannot be accessed directly
    // cout << privateC << endl;
}

class D : protected A { // D protectedly inherits from A
    protected :
        int protectedD; // additional protected member variable in D
    private:
        int privateD; // additional private member variable in D
    public:
        void show(); // member function declaration
};

void D::show() {
    cout << "Show Value Function D()" << endl;
    showvalue(); // accessing showvalue() function from A
    protectedA = 14; // accessing protected member variable in D
    cout << protectedA << endl;
    // privateA = 20; // private member cannot be accessed directly
    // cout << privateA << endl;
}

int main() {
    A a1(3, 4); // creating an object of class A with arguments for the constructor
    a1.showvalue(); // calling the showvalue() function for object a1
    B b1; // creating an object of class B
    b1.show(); // calling the show() function for object b1
    // b1.protectedB; // protected member variable cannot be accessed directly
    C c1; // creating an object of class C
    c1.show(); // calling the show() function for object c1
    D d1; // creating an object of class D
    d1.show(); // calling the show() function for object d1
    // d1.showvalue(); // showvalue() function is not accessible due to protected inheritance

    return 0;
}

