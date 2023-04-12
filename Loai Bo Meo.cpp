#include <bits/stdc++.h>

using namespace std;
int main(){
	int TC ; cin >> TC;
	while(TC--){
		int n ; cin >> n ; 
		int a[n];
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		int res = 1 , cnt = 1;
		for (int i = 1; i < n ; i++){
			if(a[i] == a[i - 1]){
				cnt++;
				cout << cnt << " ";
			}
			else{
				cnt = 1;
			}
			res = max(res, cnt);
		}
		cout << n - res ;
	}


	return 0;
}

