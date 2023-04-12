#include <bits/stdc++.h>

using namespace std;
int main(){
	int TC; cin >> TC;
	while(TC--){
		int n ; cin >> n ;
		int a[n];
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		int sum = 0 ; 
		for (int i = 0 ; i < n ; i++){
			sum += a[i];
		}
		int left = 0;
		bool ok = false;
		for  (int i = 0 ; i < n ; i++){
			sum -= a[i];
			if(sum == left){
				cout << i << " " ;
				ok = true;
			}
			
			left += a[i];
		}
		if (ok == false){
			cout <<"-1";
		}
		cout << endl;
	}
	



	return 0;
}

