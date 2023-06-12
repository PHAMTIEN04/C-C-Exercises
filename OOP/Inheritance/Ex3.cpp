//Abstract Class
#include <bits/stdc++.h>

using namespace std;

class A {
    private:
        int privateA; // private member variable
    public:
        virtual void showvalue() = 0; // pure virtual function declaration
};

class B : public A {
	private:
		int privateB;
	public:
		virtual void showvalue(); // function override
};

void B::showvalue() {
	cout << "Showvalue() of Value B" << endl;
}

class C : public A {
	private:
		int privateC;
	public:
		virtual void showvalue(); // function override
};

void C::showvalue() {
	cout << "Showvalue() of Value C" << endl;
}

int main() {
	B b1; // creating an object of class B
	b1.showvalue(); // calling the showvalue() function for object b1

	C c1; // creating an object of class C
	c1.showvalue(); // calling the showvalue() function for object c1

	// A a1; // cannot create object of abstract class A
	// A *a1 = &b1; // pointer of base class type pointing to derived class object
	// a1->showvalue(); // calling the showvalue() function using the base class pointer

	return 0;
}

