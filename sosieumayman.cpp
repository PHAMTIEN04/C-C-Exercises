#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
    
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int cnt = 0,n,b;
	cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> b;
        if(b == 4 or b == 7 or b == 16 or b == 28 or b == 44 or b == 47 or b == 49 or b == 64 or b == 74 or b == 77) cnt++;
    }
    cout << cnt;

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}
