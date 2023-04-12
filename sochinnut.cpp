#include <bits/stdc++.h>

using namespace std;
int checknut(int n){
	int s = 0 ; 
	while (n !=0){
		s += n%10;
		n/=10;
	}
	return s ;
}
int main(){
	int n ; cin >> n ;
	int cnt=0;
	if(n>=9){
	for (int i = 9 ; i <= n ; i++){
	
		if(checknut(i)%10 == 9){
			cnt++;
		}
	}	
	}
	else{
		cout <<0;
	}
	cout << cnt;

	


	return 0;
}

