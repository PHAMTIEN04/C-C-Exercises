#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long n; 
    cin >> n;
    
    string a;
    cin >> a;
    long long check = 0;
    long long kt = INT_MIN; 
    if(ktr(a,n) == true){
       cout << a; return 0; 
    } 
    else{
        for (int i = 0; i < n; i++) {
        if (a[i] >= '0' && a[i] <= '9') {
            check = (check * 10) + (a[i] - '0');
        } else {
            kt = max(kt, check);
            check = 0;
        }
    }
    kt = max(kt, check);

    cout << kt;
    }

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

