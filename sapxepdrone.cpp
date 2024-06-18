#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  	int n ; cin >> n;
    int a[n];
    int cnt = 0;
    for(int i = 0 ; i < n ;i++){
        cin >> a[i];
    }
    int t = 0 ,p = n-1;
    while(t < p){
        while(a[t] == 1){
            t++;
        }
        while(a[p] == 2){
            p--;
        }
        if(t < p ){
         swap(a[t],a[p]);
         cnt++;   
        } ;
    }
    cout << cnt;

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

