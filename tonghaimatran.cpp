#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int m,n ; cin >> m >> n;
    int a[m][n],b[m][n];
    for(int i = 0 ; i < m ; i++){
        for(int j = 0;j < n ;j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0 ; i < m ; i++){
        for(int j = 0;j < n ;j++){
            cin >> b[i][j];
            b[i][j] += a[i][j];
        }
    }
    for(int i = 0 ; i < m ; i++){
        for(int j = 0;j < n ;j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

