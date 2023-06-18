//Template Function
#include <bits/stdc++.h>

using namespace std;

// Template function check() to check if a value is non-zero
template <class T>
T check(T i){
	if(i == 0){
		return false; // If i is zero, return false
	}
	else{
		return true; // If i is non-zero, return true
	}
}

int main(){
	int a = 5;
	cout << check(a) << endl; // Calling the template function check() with int type and printing the result

	if(check(a)){
		cout << "Yess!!!!" << endl; // Printing a message if check(a) returns true
	}

	return 0;
}

