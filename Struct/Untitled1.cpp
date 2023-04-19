#include <bits/stdc++.h>

using namespace std;
int main(){
	int choose_o;
	int choose_t;
	cout << "Enter the 1st number: ";
	cin >> choose_o;
	cout << "Enter the 2nd number: ";
	cin >> choose_t;
	switch(choose_o,choose_t){
		case choose_o > choose_t:
			cout << "The greater number is: "<<choose_o;
			break;
		case choose_o < choose_t:
			cout << "The greater number is: "<< choose_t;
			break;
		case choose_o == choose_t:
			cout << "The greater number is: " << choose_o;
		default:
			cout << "Error";
	}



	return 0;
}

