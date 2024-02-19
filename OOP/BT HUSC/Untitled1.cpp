#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> opinions(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> opinions[i];
    }

    if (std::find(opinions.begin(), opinions.end(), 1) != opinions.end()) {
        std::cout << "Hard" << std::endl;
    } else {
        std::cout << "Easy" << std::endl;
    }

    return 0;
}

