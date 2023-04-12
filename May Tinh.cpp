#include <bits/stdc++.h>

using namespace std;
int main(){
	int TC ; cin >> TC;
	while(TC--){
		int n,c ; cin >> n >> c; 
		int a[n];
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
	int ans = 1;
	for(int i = 1 ; i < n ; i++){
		if(a[i] - a[i-1] <= c){
			ans++;
			cout << a[i] << " " << a[i-1];	
					a[i-1] = a[i];

		}
		else {
			ans = 1;
		}
	
	}
	cout << ans;
	}



	return 0;
}

