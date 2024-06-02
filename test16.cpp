#include <bits/stdc++.h>

using namespace std;
int f(int n){
	if(n==1) return 1;
	else{
		return f(n-1) + 2 * n;
	}
}
int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cout << f(5);
	return 0;
}

