#include <iostream>

int main() {
    int a[3][3];
    int b[2][2] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> a[i][j];
        }
    }

    int row, col;
    std::cin >> row >> col;

    if (row >= 1 && row <= 3 && col >= 1 && col <= 3) {
        int c_1 = 0;
        int c_2 = 0;
        for (int i = 0; i < 3; i++) {
            if (i + 1 != row) {
                for (int j = 0; j < 3; j++) {
                    if (j + 1 != col) {
                        b[c_1][c_2] = a[i][j];
                        c_2++;
                    }
                }
                c_1++;
                c_2 = 0;
            }
        }

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                std::cout << b[i][j] << " ";
            }
            std::cout << std::endl;
        }
        int dtmt = (b[0][0]*b[1][1])-(b[0][1]*b[1][0]);
        std::cout << dtmt;
    }

    return 0;
}

