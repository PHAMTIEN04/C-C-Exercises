#include <bits/stdc++.h>
using namespace std;

int main()
{
   int n;cin >> n;
   double a[n];
   long long sum = 0;
   int l =0, r =n;
    for(int i = 0 ; i < n;i++){
       cin >> a[i];
       sum+=a[i];
       }
    while(l < r-1){
        l++;
        r--;
    }
    cout << fixed << setprecision(6)<<(double)sum/n<<endl;
    for(int i = 0 ; i < n-1 ;i++){
        for(int j = i+1; j < n ;j++){
            if(a[i] > a[j]) {
                swap(a[i],a[j]);
            }
            
        }
    }
    if(n%2 !=0){
       cout << fixed << setprecision(6)<<(double)a[n/2]; 
    }
    if(n%2 == 0){
        cout << fixed << setprecision(6)<<(double)((a[l-1]+a[r])/2);         
    }
    

    return 0;
}
