#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    int sum = 0;
    int temp = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            int digit = s[i] - '0';
            temp = temp * 10 + digit;
        }
            else{
            	sum +=temp;
            	temp =0 ;
			}
    }
    
    sum += temp; 

    cout << sum << endl;

    return 0;
}
