#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    int cnt = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool allEven;

    while (true) {
        allEven = true;

        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 1) {
                allEven = false;
                break;
            }
        }

        if (!allEven) {
            break;
        }

        for (int i = 0; i < n; i++) {
            a[i] /= 2;
        }

        cnt++;
    }

    cout << cnt;
    return 0;
}

