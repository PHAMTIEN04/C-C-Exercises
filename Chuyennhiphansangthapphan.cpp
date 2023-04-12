#include <iostream>
#include <string>
using namespace std;

unsigned long long binaryToDecimal(string binary) {
    unsigned long long decimal = 0;
    unsigned long long power = 1;
    while (!binary.empty()) {
        char digit = binary.back();
        binary.pop_back();
        if (digit == '1') {
            decimal += power;
        }
        power *= 2;
    }
    return decimal;
}

int main() {
    string s;
    cin >> s;
    cout << binaryToDecimal(s);
    return 0;
}
