#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int l1,r1,l2,r2; cin >> l1>> r1>>l2>>r2;
    int ma = max(l1,l2);
    int mi = min(r1,r2);
    if(ma <= mi){
        cout << ma << " " << mi;
    }else{
    cout << -1;
    }

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

