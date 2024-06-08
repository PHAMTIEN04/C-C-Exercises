#include <bits/stdc++.h>

using namespace std;
int f(int n){
	if(n == 0) return 1;
	if(n%2 == 0){
		return f(n-1) +2*n;
	}
	else{
		return f(n-1) +n;
	}
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n ; cin >> n;
	cout << f(n);


	return 0;
}

