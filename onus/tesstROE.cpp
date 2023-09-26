#include <iostream>
using namespace std;
int main() {
    double kiquy ; 
	cout << "Ki quy: ";cin >> kiquy;
    double khoiluong;
	cout << "Khoi luong: "; 
	cin >> khoiluong;
    double giavaolenh; 
	cout << "Gia vao lenh: ";
	cin >> giavaolenh;
    double giathitruong; 
	cout << "Gia thi truong: ";
	cin >> giathitruong;
	string choose;
	cout << "Choose: ";
	cin >> choose;
	if(choose == "short"){
		double loi_nhuan_percent = ((giavaolenh -giathitruong ) / giavaolenh) * 100 * (khoiluong / kiquy);
    	cout << "ROE%: " << loi_nhuan_percent << "%" << std::endl;
	}
    else if(choose == "long"){
    	double loi_nhuan_percent = (( giathitruong- giavaolenh) / giavaolenh) * 100 * (khoiluong / kiquy);
    	cout << "ROE%: " << loi_nhuan_percent << "%" << std::endl;
	}

    return 0;
}

