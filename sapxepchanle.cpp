#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin >> n;
    int a[n];
    int cnt_l = 0, cnt_c = 0;
    for(int i = 0 ; i < n;i++){
       cin >> a[i];
        if(a[i] % 2 == 0){
            cnt_c++;
            
        }
        if(a[i] % 2 != 0){
            cnt_l++;
        }
    }
    for(int i = 0 ; i < n-1;i++){
        for(int j = i+1;j< n;j++){
            if(a[i] > a[j]) swap(a[i],a[j]);
        }
    }
    int c[cnt_c],l[cnt_l];
    int k_c=0,k_l=0;
    for(int i = 0;i < n;i++){
        if(a[i] % 2 == 0){
            c[k_c] = a[i];
            k_c++;
            
        }
        if(a[i] % 2 == 1){
            l[k_l] = a[i];
            k_l++;
            
        } 
    }
    for(int i = 0 ; i < cnt_c ;i++){
        cout << c[i]<<" ";
    }
    for(int i = 0 ; i < cnt_l ;i++){
        cout << l[i]<< " ";
    }

     
    

    return 0;
}
