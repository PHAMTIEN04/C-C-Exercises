#include <iostream>
using namespace std;
int main()
{
   int n;cin >> n;
   int a[n];
   long long cnt = 0;
   for(int i = 0 ; i < n;i++){
       cin >> a[i];
   }
    for(int i = 0 ; i < n;i++){
       if(a[i]%2 == 0){
           cnt++;
       }else if((a[i] < 0)&&(a[i] % 3 == 0)){
           cnt++;
       }
   }
   cout << cnt;
   
    return 0;
}

