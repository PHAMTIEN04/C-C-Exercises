#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/hash_policy.hpp>
#include <ext/rope>
using namespace __gnu_cxx; // #include <ext/rope>
using namespace __gnu_pbds; // #include <ext/pb_ds/???.hpp>
using namespace std;
bool check(int a[],int x,int n){
    for(int i = 0; i < n -1;i++){
        if(x == a[i]) return true;
    }
    return false;
}
int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n,l ; cin >> n>>l;

        
  
    int a[n-1];
    int min = 1e9;
    int max = -1e9;
    for(int i = 0 ; i < n-1;i++){
        cin >> a[i];
        if(min > a[i]){
            min = a[i];
        }
        if(max < a[i]){
            max = a[i];
        }
    }
    if(min == max){
        
        if(min < (l+n) -1 ){
            cout << min + 1;
        }
        else{
            cout << min - 1;
        } }
    if(min == l && max == (l+n)-1){
   

        for(int i = min; i <= max ;i++){
            if(check(a,i,n) == false){
                cout << i; break;
        } 
    }
    } 
    
      cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";

    

    
    
    
    return 0;
}
