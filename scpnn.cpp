#include <iostream>
#include <cmath>
using namespace std;

bool scp(int n) {
    int sqrtN = sqrt(n);
    return (sqrtN * sqrtN == n);
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min = 1e9;
    for (int i = 0; i < n; i++) {
        if (scp(arr[i])) {
            if ( arr[i] < min) {
                min = arr[i];
            }
        }
    }

    cout << min << endl;

    return 0;
}
