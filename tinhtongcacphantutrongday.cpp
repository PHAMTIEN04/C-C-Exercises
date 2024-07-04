#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long n;cin >>n;
    long long a[n];
    long long sum=0;
    for(int i = 0 ; i < n ; i++) {
        cin >> a[i]; sum+=a[i];
    }
    cout << sum;

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

