#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long tich =1;
    long long tong =0;
    long long n;cin >> n;
    while(n!=0){
        tich *= (n%10);
        tong += (n%10);
        n /= 10;
    }
    
    cout << fixed << setprecision(3) << (double)tich/tong;
    return 0;
}
