#include <bits/stdc++.h>

using namespace std;
int main(){
	int TC ; cin >> TC ;
	while(TC--)
	{
		int n ; cin >> n ; 
		int a[n];
		for (int i = 0 ; i < n ; i++)
		{
			cin >> a[i];
		}
		sort (a, a + n);
		
		int res = INT_MAX ;
		for (int i = 0 ; i < n; i++){
			
			for (int j = i+1 ; j < n; j++){
				
				res = min(res, a[j] - a[i]);
				
			}
		}
		
		cout << res << endl;
	}

	return 0;
}

