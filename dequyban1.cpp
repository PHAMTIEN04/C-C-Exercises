#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;
long long f(int n){
    if(n == 0) {
        return 0;
        
    }
    if(n > 0){
      return f(n-1) + n;  
    }
    
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n ; cin >> n;
    cout << f(n);

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

