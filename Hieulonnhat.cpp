#include <bits/stdc++.h>

using namespace std;
int main(){
	int TC ; cin >> TC ;
	
	while (TC--){
		int n ; cin >> n ; 
		int a[n];
		for (int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		int min_vl = a[0],res = -1e9;
		for (int i = 1 ; i < n; i++){
			if(a[i] > min_vl){
			res = max(res,a[i] - min_vl);
			}
			min_vl = min(a[i], min_vl);
			}
		
		if (res == -1e9){
			cout <<"-1" << endl;
		}
		else{
			cout << res << endl; 
		}
		
		
		
	}



	return 0;
}

