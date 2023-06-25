#include <iostream>

int main() {
    double kiquy = 4185.0;
    double khoiluong = 442674.0;
    double giavaolenh = 737791600.0;
    double giathitruong = 737000000.0;

    double loi_nhuan_percent = ((giavaolenh -giathitruong ) / giavaolenh) * 100 * (khoiluong / kiquy);
    std::cout << "ROE%: " << loi_nhuan_percent << "%" << std::endl;

    return 0;
}

