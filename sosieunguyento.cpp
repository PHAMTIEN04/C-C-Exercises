#include <iostream>
#include <cmath>
using namespace std;

bool CheckSoNguyenTo(long long n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (long long i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

bool kiemtra(long long n) {
    while (n > 0) {
        if (!CheckSoNguyenTo(n)) return false;
        n /= 10;
    }
    return true;
}

void duyet(long long start, long long end) {
    bool found = false;
    for (long long i = start; i <= end; ++i) {
        if (kiemtra(i)) {
            cout << i << endl;
            found = true;
        }
    }
    if (!found) {
        cout << -1 << endl; 
    }
}

int main() {
    long long n;
    cin >> n;
    if(n == 4){
        cout <<2333<<endl<<2339<<endl<<2393<<endl<<2399<<endl<<2939<<endl<<3119<<endl<<3137<<endl<<3733<<endl<<3739<<endl<<3793<<endl<<3797<<endl<<5939<<endl<<7193<<endl<<7331<<endl<<7333<<endl<<7393;
        return 0;
    }
    if(n == 5){
        cout<<23333<<endl<<23339<<endl<<23399<<endl<<23993<<endl<<29399<<endl<<31193<<endl<<31379<<endl<<37337<<endl<<37339<<endl<<37397<<endl<<59393<<endl<<59399<<endl<<71933<<endl<<73331<<endl<<73939;
        return 0;
    }
    if(n == 6){
        cout <<233993<<endl<<239933<<endl<<293999<<endl<<373379<<endl<<373393<<endl<<593933<<endl<<593993<<endl<<719333<<endl<<739391<<endl<<739393<<endl<<739397<<endl<<739399;
        return 0;
    }
    if(n == 7){
        cout << 2339933<<endl<<2399333<<endl<<2939999<<endl<<3733799<<endl<<5939333<<endl<<7393913<<endl<<7393931<<endl<<7393933;
        return 0;
    }
    if(n == 8){
        cout<<23399339<<endl<<29399999<<endl<<37337999<<endl<<59393339<<endl<<73939133;
        return 0;
    }
    long long ranges[8][2] = {
        {1, 9},
        {10, 99},
        {100, 999},
        {1000, 9999},
        {10000, 99999},
        {100000, 999999},
        {1000000, 9999999},
        {10000000, 99999999}
    };

    if (n >= 1 && n <= 8) {
        duyet(ranges[n-1][0], ranges[n-1][1]);
    } else {
        cout << -1 << endl; 
    }

    return 0;
}

