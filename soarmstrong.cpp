#include <iostream>
#include <cmath>
using namespace std;
bool kiemtra(long long n) {
    long long sum = 0;
    long long c = n;
    int size = 0;
    long long g = n;
    while (c > 0) {
        c /= 10;
        size++;
    }
    while (n > 0) {
        sum+= pow(n%10,size);
        n /= 10;
    }
    if(sum == g) return true;
    return false;
}
int main()
{
    long long n;cin>>n;
    long long a[n];
    int cnt = 0;
    for(int i = 0 ; i < n ;i++){
        cin>> a[i];
        if(kiemtra(a[i]) == true) cnt++;
    }
    cout << cnt;

    return 0;
}
