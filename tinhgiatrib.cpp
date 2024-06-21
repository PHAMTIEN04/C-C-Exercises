#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int x ; cin>>x;
    long long b = 0;
    if(x > 3){
        b = pow(x,3) + 2*pow(x,2) + 5*x;
    }
    if(x >= 1 && x <= 3){
        b = pow(x,2) - 2*x + 4;
    }
    if(x < 1){
        b=  5*x -8;
    }
    cout << b;

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

