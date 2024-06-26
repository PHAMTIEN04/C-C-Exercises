#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  int a,b; cin >> a >> b;
    if(a==0 && b == 0){
        cout << "Many Solutions";return 0;
    }
    if(a == 0){
        cout << "No Solution";
    }
    else{
        cout <<fixed << setprecision(2) << (float)(-b)/a;
    }

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

