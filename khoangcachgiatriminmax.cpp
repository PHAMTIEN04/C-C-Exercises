#include <iostream>
using namespace std;
int main()
{
   int n;cin >> n;
   int a[n];
   for(int i = 0 ; i < n;i++){
       cin >> a[i];
   }
   int min = 0;
   int max = 0;
   for(int i = 1;i<n;i++){
       if(a[min] > a[i]){
           min = i;
       }
       if(a[max] < a[i]){
           max = i;
       }
   }
    if(max > min){
        cout << max - min; 
    }else{
        cout << min - max;
    }
      
    return 0;
}
