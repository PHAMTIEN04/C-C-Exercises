#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
    long long a[n+1];
    a[0] = 2;
    a[1] = 1;
    
    for(int i = 2 ; i <= n;i++){
        a[i] = a[i-1] + a[i-2];
        
    }
    for(int i = 0 ; i <= n ;i++){
        cout << a[i] << " ";
    }

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

