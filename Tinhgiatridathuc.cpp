#include <bits/stdc++.h>

using namespace std;

int MOD = 1000000009 + 7 ; 
int main(){
	int TC ; cin >> TC ;
	
	while(TC--){
		int n , x ; cin >> n >> x ; 
		int a[n];
		for (int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		int res = 0,lt = 1 ;
		
		for (int i = n-1 ; i >= 0 ; i--)
		{
			res += a[i] * lt;
			res %= MOD;
			lt *= x ;
			lt %= MOD;
		}
		cout << res << endl;
	}


	return 0;
}

