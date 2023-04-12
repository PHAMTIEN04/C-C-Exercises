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
		int res = a[0];
		for(int i = 1; i < n ; i++){
		
				res = __gcd(res,a[i]);	
		}
		if(res == 1 ){
			cout <<"-1";
			break;
		}
		int cnt= 0 ;
		for (int i = 2 ; i <= res ; i++){
			if (res % i == 0){
				cnt++;
			}
			
		}
		cout << cnt<<endl;
	}
	



	return 0;
}

