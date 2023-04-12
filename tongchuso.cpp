#include <bits/stdc++.h>

using namespace std;

int tcs(int n){
	int s = 0;
	while(n != 0 ){
		s+= n%10;
		n = n / 10;
		
	}
	return s;
}
int main(){
	int n,A,B;cin >> n >> A>> B;
	int sum=0;
	
	for (int i = 1 ; i <= n;i++){
		int t = tcs(i);
		if (A<=t && t<= B){
			sum += i;
			
		}
	}
	cout << sum;



	return 0;
}

