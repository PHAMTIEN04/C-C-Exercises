#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,m ; cin >> n >> m ; 
	int a[n][m];
	for (int i = 0 ; i < n ; i++ ){
		for (int j = 0 ; j < m ; j++){
			cin >> a[i][j];
		}
	}
	int temp = 0 ;
	for (int i = 0 ; i < n ; i++){
		for (int j = 0 ; j < m ; j++){
			for(int k = j+1 ; k < m ; k++){
				if(a[i][j] > a[i][k]){
					temp = a[i][k];
					a[i][j] = temp;
					a[i][k] = a[i][j];
				}
			}
		}
	
	}
	for (int i = 0 ; i < n ; i++ ){
		for (int j = 0 ; j < m ; j++){
			cout << a[i][j]<<" " ;
		}
		cout << endl;
	}
	


	return 0;
}

