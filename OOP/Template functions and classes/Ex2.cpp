//Template Class
#include <bits/stdc++.h>

using namespace std;

// Template class Diem representing a point
template <class T>
class Diem{
	private:
	T x, y;
	public:
	Diem(T x, T y): x(x), y(y){};
	void xuat();
};

// Template member function xuat() to print the coordinates of the point
template <class T>
void Diem<T>::xuat(){
	cout << x << " " << y << endl;
}

// Explicit instantiation of the template class Diem with specific types
template class Diem<int>;
template class Diem<char>;
template class Diem<double>;

int main(){
	Diem<double> d1(3.4, 5.4); // Creating an instance of Diem class with double type
	d1.xuat(); // Calling the member function xuat() to print the coordinates of d1
	
	return 0;
}

