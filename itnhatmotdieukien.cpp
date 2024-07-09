#include <iostream>
using namespace std;
int size(int n){
    int cnt =0;
    while(n!=0){
        n = n/10;
        cnt++;
    }
    return cnt;
}
int main() {
    int n;cin >> n;
    if((n%2 != 0) || (n>0 && size(n) ==3)){
        cout << "YES";   
    }else{
        cout << "NO";
    }
    return 0;
}

