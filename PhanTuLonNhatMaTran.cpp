#include <bits/stdc++.h>

using namespace std;
int main(){
	int T; cin >> T;
	while(T--){
		int n , m; cin >> n >> m;
		int a[n][m];
		for (int i = 0 ; i < n ; i++){
			for (int j = 0 ; j < m ;j++){
				cin >> a[i][j];
			}
		}
		int max_val = INT_MIN;
		for (int i = 0 ; i < n ; i++){
			for( int j = 0 ; j < m ; j++){
				max_val = max(max_val, a[i][j]);
			}
		}
		cout << max_val<<endl;
		for (int i = 0 ; i < n; i++){
			for ( int j = 1 ; j < m ;j++){
				if (max_val == a[i][j]){
					cout << "Vi tri xuat hien : A["<<i+1<<"]["<<j+1<<"]\n";
				}
			}
		}
	}



	return 0;
}

