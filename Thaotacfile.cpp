#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n, x;
    cout << "Nhap so nguyen n: ";
    cin >> n;
    
    ofstream outfile("kiemtra.dat");
    for (int i = 0; i < n; i++) {
        int number;
        cout << "Nhap so nguyen thu " << i+1 << ": ";
        cin >> number;
        outfile << number << " ";
    }
    outfile.close();
    
    cout << "Nhap so nguyen x: ";
    cin >> x;
    
    ifstream infile("kiemtra.dat");
    int count_x = 0, count_odd = 0;
    int number;
    while (infile >> number) {
        if (number == x) {
            count_x++;
        }
        if (number % 2 == 1) {
            count_odd++;
        }
    }
    infile.close();
    
    cout << "Trong file kiemtra.dat co " << count_x << " so x." << endl;
    cout << "Trong file kiemtra.dat co " << count_odd << " so le." << endl;

    return 0;
}

