#include <iostream>
using namespace std;
int main()
{
    int n,x;cin >> n >> x;
    int a[n];
    int vt = 0;
    for(int i = 0 ; i < n ;i++){
        cin >> a[i];
    }
    bool check = false;
    for(int i = 0 ; i < n ;i++){
        if(x < a[i]){
            vt = i;
            check = true;
            break;
        }
    }
    if(check == true){
        cout << vt+1;
    }else{
        cout << n+1;
    }
    
    return 0;
}
