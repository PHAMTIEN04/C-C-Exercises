#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;
int f(int m ,int n){
    if(m == 0 || m == n){
        return 1;
    }
    if(m > 0 && m < n){
        return f(m-1,n-1) +f(m,n-1);
    }
    return 0;
    
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

	int n,m; cin >> n >> m;
    cout <<f(m,n);
	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

