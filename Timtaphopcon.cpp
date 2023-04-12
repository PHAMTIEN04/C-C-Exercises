#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,m ; cin >> n >> m ; 
	int a[n],b[m];
	for (int i = 0 ; i < n ; i++){
		cin >> a[i];
		
	}
	for (int i = 0 ; i < m ; i++)
	{
		cin >> b[i];
	}
			bool check = false ;
	for (int i = 0 ; i < m ; i++){

		for (int j = 0 ; j < n ; j++){
			if (b[i] == a[j]){
				check = true;
			}
		}
		if(check== false)cout << b[i];
	}

	if (check== true) cout <<" Yes ";
	return 0;
}

