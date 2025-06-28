#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	int sum=0;
	while(t--){
		string check;
		cin>> check;
		if (check == "tetrahedron")
			sum+=4;
		if (check == "cube")
			sum+=6;
		if (check == "octahedron")
			sum+=8;
		if (check == "dodecahedron")
			sum+=12;
		if (check == "icosahedron")
			sum+=20;
	}
	cout<<sum;

//	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

