#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int a[n];
	for(int i = 0 ; i < n;i++){
		cin >> a[i] ;
	}
	
	int b[n];
	int cnt = 0;
	for(int i = 0 ; i < n-1 ;i++){
		for(int j = i + 1; j < n ; j++){
			if(a[j] <= a[i]){
				cnt++;
			}
		}
		b[i] = cnt;
		cnt = 0;
	}
	b[n-1] = 0;
	for(int i = 0 ; i < n ; i++){
		cout << b[i] << " ";
	}

	return 0;
}

