#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin >> n;
    int a[n],b[n];
    for(int i = 0 ; i < n;i++){
       cin >> a[i];
    }
    for(int i = 0 ; i < n ; i++){
        cin >> b[i];
    }
    int cnt_a = 0,cnt_b =0;
    for(int i = 0 ; i < n ;i++){
        if(a[i] > b[i]) cnt_a++;
        if(b[i] > a[i]) cnt_b++;
    }
    cout << cnt_a << " " << cnt_b;    
    

    return 0;
}
