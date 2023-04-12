#include <iostream>
#include <math.h>
using namespace std;

int reverse(int n){
	int  reversed_number = 0, remainder;
	while(n != 0) {
	//Thuat toan gan gia tri so dao nguoc
		remainder = n % 10;
		reversed_number = reversed_number * 10 + remainder;
		n /= 10;
	}
 
  return reversed_number;
}
string isPrime(int number){

    if(number < 2){

        return "NO";
    }
    int count = 0;
    for(int i = 2; i <= sqrt(number); i++){
        if(number % i == 0){
            count++;
        }
    }
    if(count == 0){
       return "YES";
    }else{
        return  "NO";
    }
}

int main() {

  int n;

  cin >> n;
	cout<<reverse(n)<<" "<<isPrime(n);

  return 0;
}
