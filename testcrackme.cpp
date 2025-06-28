#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cout << "Login as:";
	string lg ; getline(cin,lg);
	if(lg == "pro"){
		cout << "susscess";
	}
	else{
		cout << "login failed";
	}

//	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

