#include <bits/stdc++.h>

using namespace std;
int main(){
	int TC ; cin >> TC ;
	
	while (TC--){
		int n ,k ; cin >> n >> k ; 
//		int a[n+10] = {0};
		int a[n];
		for (int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		int sum , check = 0,cnt =0;
		for (int i = 0 ; i <= n - k   ; i++){
			sum = 0;
			for (int j = i ; j < k+i ; j++){
				sum += a[j];
				if (sum >= check)
				{
					check = sum;
					cnt = i ;
				}
			}
		}
	for (int i = cnt ; i < cnt + k ; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
		
	}



	return 0;
}

