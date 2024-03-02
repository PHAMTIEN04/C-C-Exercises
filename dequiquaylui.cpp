#include <iostream>
using namespace std;

void inrakq(int a[]) {
    for (int i = 0; i < 3; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void Try(int i, int x[], bool cn[]) {
    for (int j = 1; j <= 3; j++) {
        if (cn[j - 1]) {
            cn[j - 1] = false;
            x[i - 1] = j;
            if (i == 3) {
                inrakq(x);
            } else {
                if (i == 1 || x[i - 1] != x[i - 2]) {
                    Try(i + 1, x, cn);
                }
            }
            cn[j - 1] = true;
        }
    }
}

int main() {
    int x[3];
    bool cn[3] = {true, true, true};
    Try(1, x, cn);
    return 0;
}

