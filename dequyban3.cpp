#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;
int A(int m ,int n){
    if(m == 0){
        return n+1;
    }
    if(m > 0 && n == 0){
        return A(m-1,1);
    }
    if(m > 0 && n > 0){
        return A(m-1,A(m,n-1));
    }
    return 0;
    
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int m,n; cin >> m >> n;
    cout <<A(m,n);

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

