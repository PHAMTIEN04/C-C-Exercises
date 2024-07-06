#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
    int x;cin >> x;
    int a[n];
    int vt=0;
    for(int i = 0 ; i < n ;i++){
        cin>> a[i] ;
    }
    bool check = false;
    for(int i = 0 ; i < n;i++){
        if(x <= a[i]){
            vt = i ;
            check = true;
            break;
        }
    }
    if(check == false) cout <<n+1;
    if(check == true) cout << vt+1;

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

