#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string xau;
    cin >> xau;

    size_t location_A = xau.find('A');
    size_t location_Z = xau.rfind('Z');

    size_t len_max = location_Z - location_A + 1;
    cout << len_max << endl;

    return 0;
}

