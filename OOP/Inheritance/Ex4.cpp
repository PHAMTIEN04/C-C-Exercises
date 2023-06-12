//Polymorphism
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
		void showvalue(); // function override
};

void B::showvalue() {
	cout << "Showvalue() of Value B" << endl;
}

class C : public A {
	private:
		int privateC;
	public:
		void showvalue(); // function override
};

void C::showvalue() {
	cout << "Showvalue() of Value C" << endl;
}

class D : public A {
	private:
		int privateD;
	public:
		void showvalue(); // function override
};

void D::showvalue() {
	cout << "Showvalue() of Value D" << endl;
}

int main() {
	A *a1[4] = {new B(), new C(), new D()}; // an array of base class pointers holding derived class objects
	for (int i = 0; i < 4; i++) {
		a1[i]->showvalue(); // calling the showvalue() function for each object using base class pointers
	}

	return 0;
}

