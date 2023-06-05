#include <bits/stdc++.h>

using namespace std;

int main(){
	int m,n; cin >>m>> n;
	int a[m][n];
	for (int i = 0 ;i < m;i++){
		for (int j = 0;j< n ;j++){
			cin >> a[i][j];
		}
	}
	for (int i = 0 ;i < m;i++){
		for (int j = 0;j< n ;j++){
		cout << a[i][j] << " ";
		}
		cout << endl;
	}
	
	int check = m*n;
	int b[check];
		int k = 0;
		int h = 0;
	for(int i = 0 ; i < check;i++){
		b[i] = a[k][h];
		if(h != n-1 ){
			h++;
		}
		else{
			h=0;
			if(k!= m-1){
				k++;
			}
		}
		
	}
	for (int i =0 ; i < check ;i++){
		cout << b[i] << " ";
	}
	

	return 0;
}

