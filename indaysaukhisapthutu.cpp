#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,x,y; cin >> n >> x >> y;
    int a[n];
    for(int i = 0 ; i < n ;i++){
        cin >> a[i];
    }
    for(int i = 0 ; i < n-1;i++){
        for(int j = i + 1 ; j < n ;j++){
            if(a[i] > a[j]) swap(a[i],a[j]);   
        }
    }
    for(int i = 0 ; i < n ;i++){
        if(i < x || i > n-y-1) cout << a[i] << " ";
    }

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}
