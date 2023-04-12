#include <iostream>
#include <cstring>  // Thu vi?n cstring ch?a hàm strlen()
#include <cctype>   // Thu vi?n cctype ch?a hàm isdigit()

using namespace std;

int main()
{
    char str[100];  // Khai báo m?ng ký t? str có d? dài t?i da 100 ký t?
    cout << "Nhap chuoi ky tu: ";
    cin >> str;  // Nh?p chu?i ký t? str t? bàn phím

    int len = strlen(str);  // Tính d? dài c?a chu?i ký t? str
    int count_int = 0, count_float = 0;  // Khai báo và kh?i t?o bi?n d?m s? nguyên và s? th?c là 0

    // Duy?t qua t?ng ký t? trong chu?i ký t? str
    for (int i = 0; i < len; i++)
    {
        // N?u ký t? là s?, tang bi?n d?m s? nguyên lên 1
        if (isdigit(str[i]))
            count_int++;

        // N?u ký t? là d?u ch?m, tang bi?n d?m s? th?c lên 1
        if (str[i] == '.')
            count_float++;
    }

    // Xu?t k?t qu? ra màn hình
    cout << "So luong so nguyen: " << count_int << endl;
	cout << "So luong so thuc:"<<count_float<<endl;
	
	return 0;
}
