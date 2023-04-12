#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

bool isPrime(int number) {
    if (number <= 1) return false;

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    const int numOfPrimes = 100;
    int primes[numOfPrimes];
    int index = 0;
    int number = 2;

    while(index < numOfPrimes) {
        if(isPrime(number)) {
            primes[index] = number;
            index++;
        }
        number++;
    }

    for(int i = 0; i < numOfPrimes; i++){
        cout << Primes[i] << endl;
    }

    return 0;
}

