#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b,c;cin >> a >> b >> c;
       if (abs(a-b) < 1e-9 && abs(b - c) < 1e-9) {
        cout << "Tam giac deu";
    } else if (abs(a - b) < 1e-9|| abs(b - c) < 1e-9|| abs(a - c) < 1e-9) {
        cout << "Tam giac can";
    } else {
        cout << "Tam giac thuong";
    }
    return 0;
}
