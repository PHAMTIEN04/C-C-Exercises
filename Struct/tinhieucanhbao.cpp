
#include <iostream>
using namespace std;
bool check(int a[],int n,int x){
    for(int i = 0;i < n;i++){
        if(a[i] == x) return true;
    }
    return false;
}
int main()
{
    int n,k,b; cin >> n >> k >> b;
    int cnt = 0;
    int tbkh[n-b];
    int tbh[b];
    int c[b+1];
    for(int i = 0 ; i < b ;i++){
        cin >> tbh[i];
        c[i] = tbh[i];
    }
    int kk = 0;
    for(int i = 1 ; i <= n;i++){
        if(check(tbh,b,i) == false){
            tbkh[kk] = i;
            kk++;
        }
    }
    
    for(int i = 0 ; i < b;i++){
        cout << tbh[i] << " ";
    }
    cout << endl;
    for(int i = 0 ; i < kk;i++){
        cout << tbkh[i] << " ";
    }
    return 0;
}
//chuaxong
