#include <bits/stdc++.h>
bool scp(int n) {
    int sqrtN = sqrt(n);
    if(sqrtN * sqrtN == n) return true;
    return false;
}
using namespace std;
int main()
{   
    int n;cin>>n;
    int a[n];
    int cnt =0;
    for(int i = 0 ; i < n ;i++){
        cin >> a[i];
        if(scp(a[i]) == true){
            cnt++;
        }
        
    }
    cout << cnt;
    
    return 0;
}
