#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int total_cost;

    if (n < 12) {
        total_cost = n * 200000;
    } else {
        total_cost = 11 * 200000 + (n - 11) * 150000;
    }

    if (total_cost > 3500000) {
        total_cost *= 0.9;
    }

    std::cout << total_cost << std::endl;

    return 0;
}

