#include <bits/stdc++.h>

using namespace std;
int f[1001];
void F()
{   
	int fibo[100];
	fibo[0] = 0 ;
	fibo[1] = 1 ;
	for (int i = 2 ; i < 101 ; i++) fibo[i] = fibo[i-1] +fibo[i-2];
	for (int i = 0 ;fibo[i] <= 1000 ; i++) {
		f[fibo[i]] = 1 ;
	}	
}
int main(){
	F();
	int TC ; cin >> TC ;
	
	while(TC--){
		int n ; cin >> n ; 
		int a[n];
	for (int i = 0 ; i <n ; i++){
		cin >> a[i];
	}

	for(int i = 0 ; i < n ; i++) {
		if(f[a[i]]){
			cout << a[i];
		}

	} 
	}
	

	return 0;
}

