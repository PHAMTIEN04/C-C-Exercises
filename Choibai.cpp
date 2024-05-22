#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; 
    cin >> n;

    if (n >= 2) {
        int a[n][2];
        int c1 = -1e9, c2 = -1e9;
        int ia = 0, ib = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 2; j++) {
                cin >> a[i][j];
                if (j == 0 && c1 < a[i][j]) {
                    ia = i;
                    c1 = a[i][j];
                }
                if (j == 1 && c2 < a[i][j]) {
                    ib = i;
                    c2 = a[i][j];
                }
            }
        }

        if (ia == ib) {
            int max_a = -1e9;
            int max_b = -1e9;

            for (int i = 0; i < n; i++) {
                if (i != ia && a[i][0] > max_a) {
                    max_a = a[i][0];
                }
                if (i != ib && a[i][1] > max_b) {
                    max_b = a[i][1];
                }
            }

            cout << max(c1 + max_b, c2 + max_a) << endl;
        } else {
            cout << c1 + c2 << endl;
        }
    }

    return 0;
}
