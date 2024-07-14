#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long n;cin >> n;
   long long a[n];
   long long sum = 0;
    for(int i = 0 ; i < n;i++){
       cin >> a[i];
       sum+=a[i];
       }
    cout << fixed << setprecision(2)<<(double)sum/n;
    
    return 0;
}
