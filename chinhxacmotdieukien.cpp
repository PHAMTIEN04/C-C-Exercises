#include <iostream>
using namespace std;

int main() {
    int n;cin >> n;
    if((n%2 == 0) && (n < 0 && n % 3 ==0)){
        cout << "No";
        return 0;
    }
    if((n%2!= 1) || (n < 0 && n % 3 ==0)){
        cout << "Yes";
        return 0;
    }
    if(n>0){
        cout << "No";
    }
    
    return 0;
}
