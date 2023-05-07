#include <iostream>
using namespace std;

const int MOD = 1000000007;

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result = (result * i) % MOD;
    }
    return result;
}

int pow(int base, int exponent) {
    int result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exponent /= 2;
    }
    return result;
}

int comb(int n, int k) {
    int numerator = factorial(n);
    int denominator = (factorial(k) * factorial(n - k)) % MOD;
    int inverse_denominator = pow(denominator, MOD - 2);
    return (numerator * inverse_denominator) % MOD;
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int n, k;
        cin >> n >> k;
        int result = comb(n, k);
        cout << result << endl;
    }
    return 0;
}

