#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_map<int, int> freq;
    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
    }

    for (const auto& p : freq) {
        if (p.second % 2 != 0) {
            cout << p.first << endl;
        }
    }

    return 0;
}

