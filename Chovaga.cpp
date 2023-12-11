#include <iostream>

using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int ga = 2;
    int cho = 4;
    int s_ga = 0;
    int s_cho = 0;
    bool check = false;

    if (m > 0) {
        for (int i = 1; i <= m; i++) {
            int check_c = i * cho; 
            int check_g = (m - i) * ga;
            int sum = check_c + check_g;

            if (sum == n) {
                s_cho = i;
                s_ga = m - i;
                check = true;
                break;
            }
        }

        if (check && s_ga > 0 && s_cho > 0) {
            cout << "Ga = " << s_ga << endl;
            cout << "Cho = " << s_cho << endl;
        } else {
            cout << -1;
        }
    }

    return 0;
}

