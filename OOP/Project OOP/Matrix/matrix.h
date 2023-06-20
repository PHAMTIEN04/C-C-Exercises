#ifndef matrix_h
#define matrix_h

#include "iostream"

using namespace std;

class Matrix{
	private:
		int m,n;
		int **a;
	public:
		Matrix(int m = 0, int n = 0):m(m),n(n){
        if (m == 0 && n == 0) {
            a = NULL;
        }
        else {
            a = new int*[m];
            for (int i = 0; i < m; i++) {
                a[i] = new int[n];
            }
        }
    }
		void sort();
		void maxmin();
		void InputMatrix();
		void OutputMatrix();
};










#endif
