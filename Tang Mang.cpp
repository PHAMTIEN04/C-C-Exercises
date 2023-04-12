#include <bits/stdc++.h>

using namespace std;
int main(){
	int TC ; cin >> TC;
	while(TC--){
		int n ; cin >> n; 
		int a[n];
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		int sum = 0;
		for(int i = 1 ; i < n ; i++){
			if (a[i] < a[i-1]){
				sum += a[i-1] - a[i];
				a[i] = a[i -1];
			}
		}
		cout << sum;
	}



	return 0;
}

