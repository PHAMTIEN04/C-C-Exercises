#include <iostream>
using namespace std;

const int MOD = 998244353;

long long power_mod(long long a, long long b, int MOD) {
    long long result = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % MOD;
        }
        a = (a * a) % MOD;
        b /= 2;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        unsigned long long a, b;
        cin >> a >> b;
        cout << power_mod(a % MOD, b, MOD) << endl;
    }
    return 0;
}
