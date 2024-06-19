#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<long long> left(n), right(n);
    stack<int> s;

    for (int i = 0; i < n; i++) {
        while (!s.empty() && a[s.top()] >= a[i]) {
            s.pop();
        }
        left[i] = (s.empty() ? i + 1 : i - s.top());
        s.push(i);
    }

    while (!s.empty()) {
        s.pop();
    }

    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && a[s.top()] > a[i]) {
            s.pop();
        }
        right[i] = (s.empty() ? n - i : s.top() - i);
        s.push(i);
    }

    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i] * left[i] * right[i];
    }

    cout << sum << endl;

    cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
    return 0;
}
