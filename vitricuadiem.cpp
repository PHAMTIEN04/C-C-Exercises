#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    float x,y; cin >> x >> y;
    if(x == 0 && (y>0 || y <0)) cout << "Eixo Y";
    if(y == 0 && (x>0 || x < 0)) cout << "Eixo X";
    if(x == 0 && y == 0) cout << "Origem";
    if(x > 0 && y > 0) cout << "Q1";
    if(x > 0 && y < 0) cout << "Q4";
    if(y > 0 && x < 0) cout << "Q2";
    if(y < 0 && x < 0) cout << "Q3";

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

