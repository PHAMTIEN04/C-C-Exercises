#include <iostream>
using namespace std;
unsigned long long dem(unsigned long long nam) {
    if (nam < 1) return 0;
    unsigned long long dem = nam / 4 - nam / 100 + nam / 400;
    return dem;
}

int main() {
    int t; 
    cin >> t;
    while(t--) {
        unsigned long long a, b;
        cin >> a >> b;
        unsigned long long snn = dem(b) - dem(a - 1);
        cout << snn << endl;
    }
    return 0;
}

