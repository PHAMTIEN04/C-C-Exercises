#include "polynomial.h"

Polynomial::Polynomial(int *c,int n){
	size = n;
	a = new int[size];
	for(int i = 0 ; i < size ;i++){
		a[i] = c[i];
	}
}
Polynomial::~Polynomial(){
	delete []a;
	a = NULL;
}
void Polynomial::operator+(Polynomial &u) {
    int maxSize = 0;
    if (size < u.size) {
        maxSize = u.size;
    } else {
        maxSize = size;
    }
    
    for (int i = 0; i < maxSize; i++) {
        if (i < size && i < u.size) {
            a[i] = a[i] + u.a[i];
        } else if (i >= size) {
            a[i] = 0;
        } else if (i >= u.size) {
            u.a[i] = 0;
        }
    }
}
void Polynomial::operator-(Polynomial &v) {
    int maxSize = 0;
    if (size < v.size) {
        maxSize = v.size;
    } else {
        maxSize = size;
    }
    
    for (int i = 0; i < maxSize; i++) {
        if (i < size && i < v.size) {
            a[i] = a[i] - v.a[i];
        } else if (i >= size) {
            a[i] = 0;
        } else if (i >= v.size) {
            v.a[i] = 0;
        }
    }
}
void Polynomial::operator*(Polynomial &u) {
    int newSize = size + u.size - 1;
    int* resultCoeffs = new int[newSize];

    for (int i = 0; i < newSize; i++) {
        resultCoeffs[i] = 0;

        for (int j = 0; j <= i; j++) {
            if (j < size && (i - j) < u.size) {
                resultCoeffs[i] += a[j] * u.a[i - j];
            }
        }
    }

    delete[] a;
    size = newSize;
    a = resultCoeffs;
}


void Polynomial::printPolynomial(){
	int degree = size-1;
	for(int i = degree; i >=0;i--){
		if(a[i] != 0){
			cout << a[i] <<"x^"<<i;
			if(i !=0){
				cout <<" + ";
			}
		}
	}
	cout << endl;
}

