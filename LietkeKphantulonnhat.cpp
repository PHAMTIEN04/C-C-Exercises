#include <bits/stdc++.h>

using namespace std;

#define ll long long
int main(){
	
	int TC ; cin >> TC ;
	while (TC--) {
		int n ; cin >> n ;
		int a[n] ;
		map <ll , ll > mp;
		for (int i = 0 ; i < n ; i++  )
		{
			cin >> a[i];
			mp[a[i]]++;
		}
		int cnt = 0;
		
		for (int i = 0 ; i < n ;i++){
			if(mp[a[i]] >= 2){
				
				++cnt;
			}
			
		}
		cout << cnt;
				
		
		
		
		
		
		
		cout << endl;
	}


	return 0;
}

