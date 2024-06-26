#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n ; cin >> n;
    int cnt=1;
    while(n > 0){
        cnt++;
        if(n%2 == 0){
            n = 1.0*(n/2);
        }else{
            n = n*3 + 1;
        }
        
        if(n == 1) break;
        
    }
    cout << cnt;

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

