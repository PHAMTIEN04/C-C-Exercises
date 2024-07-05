#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 	int x; cin >> x;
    long long c ;
    if(x >= 10){
        c = pow(x,3) + 5*x;
    }else{
        c = pow(x,2) - 2*x + 4;
    }
    cout << c;
    return 0;

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

