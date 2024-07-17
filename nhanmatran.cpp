#include <iostream>
using namespace std;

int main() {
    int m, n, p;
    cin >> m >> n >> p;
    
    int a[n][p];
    int b[m][n];
    int c[m][p];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            c[i][j] = 0;
        }
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                c[i][j] += b[i][k] * a[k][j];
            }
        }
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}

