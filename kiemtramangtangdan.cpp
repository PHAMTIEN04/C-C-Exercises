#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin >> n;
    int a[n];
    for(int i = 0 ; i < n;i++){
       cin >> a[i];
    }
    bool check = false;
    for(int i = 1 ; i < n;i++){
       if(a[i-1] > a[i]) check = true;
    }
    if(check == true){
        cout << "No";
    }else{
        cout << "Yes";
    }

     
    

    return 0;
}
