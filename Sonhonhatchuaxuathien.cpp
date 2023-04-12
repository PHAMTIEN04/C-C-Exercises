#include <bits/stdc++.h>

using namespace std;
int main(){
	int TC ; cin >> TC ;
	while (TC--){
		int n; cin >> n ; 
		map <long long , long long> mp;
		for (int i = 0 ; i < n ; i++){
			int x; cin >> x;
			if (x > 0) mp[x] = 1;
		}
		
		for (int i = 1 ; i <= 1000001  ; i++)
		{
			if (mp[i] == 0){
				cout << i ;
				break;
			}
		}
		
		cout << endl;
	}



	return 0;
}

