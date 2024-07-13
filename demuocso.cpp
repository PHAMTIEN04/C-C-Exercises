#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

bool dem(long long n) {
    long long r = sqrt(n);
    return r * r == n;
}

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    long long d = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (dem(a[i])) {
            d++;
        }
    }
    cout << d;
    return 0;
}
