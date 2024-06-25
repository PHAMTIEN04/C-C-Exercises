#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    int a[n];
    int am=0,duong=0,chan=0,le=0;
    for(int i = 0;i<n;i++){
        cin >> a[i];
        if(a[i] < 0) am++;
        if(a[i] > 0) duong++;
        if(a[i] % 2 == 0) chan++;
        if(a[i] % 2 != 0) le++;
    }
    cout << am << endl << duong << endl << chan << endl <<le;

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

