#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    long long min_value = a[0];
    int cnt = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] < min_value) {
            min_value = a[i];
            cnt = 1;
        } else if (a[i] == min_value) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}

