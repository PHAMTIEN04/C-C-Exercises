#include <iostream>
#include <cstring>  // Thu vi?n cstring ch?a h�m strlen()
#include <cctype>   // Thu vi?n cctype ch?a h�m isdigit()

using namespace std;

int main()
{
    char str[100];  // Khai b�o m?ng k� t? str c� d? d�i t?i da 100 k� t?
    cout << "Nhap chuoi ky tu: ";
    cin >> str;  // Nh?p chu?i k� t? str t? b�n ph�m

    int len = strlen(str);  // T�nh d? d�i c?a chu?i k� t? str
    int count_int = 0, count_float = 0;  // Khai b�o v� kh?i t?o bi?n d?m s? nguy�n v� s? th?c l� 0

    // Duy?t qua t?ng k� t? trong chu?i k� t? str
    for (int i = 0; i < len; i++)
    {
        // N?u k� t? l� s?, tang bi?n d?m s? nguy�n l�n 1
        if (isdigit(str[i]))
            count_int++;

        // N?u k� t? l� d?u ch?m, tang bi?n d?m s? th?c l�n 1
        if (str[i] == '.')
            count_float++;
    }

    // Xu?t k?t qu? ra m�n h�nh
    cout << "So luong so nguyen: " << count_int << endl;
	cout << "So luong so thuc:"<<count_float<<endl;
	
	return 0;
}
