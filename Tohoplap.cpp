#include <bits/stdc++.h>

using namespace std;
int mod = 1000000007;
long long gt(int n){
	int s = 1;
	for (int i = 1 ; i <= n;i++){
		s*=i;
		s %= mod;
	}
	return s % mod;
}
long long th(int n,int k){
	int tohop = 0;
	tohop = gt(n) / (gt(k)*gt(n-k));
	return tohop % mod;
}
int main(){
	int T ; cin >> T;
	while(T--){
		int n , k ; cin >> n >> k;
		cout <<th(n,k)<<endl;
	}
	


	return 0;
}

