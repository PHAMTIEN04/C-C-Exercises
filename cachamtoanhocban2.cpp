#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    float x,k;cin>> x >> k;
    float c = sqrt(abs(x));
    float a = pow(c,4) + pow(k,3);
    cout << fixed << setprecision(2) << pow(log10(a),3) + pow(cos(x),5);

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

