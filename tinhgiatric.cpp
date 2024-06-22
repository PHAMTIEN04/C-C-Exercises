#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 	double x; cin >> x;
 	   
    if(x > 0){
        cout << fixed<<setprecision(6) <<pow(x,2) + sqrt(x) + 1;
    }
    else{
        if(x+3 == 0){
            cout << "Div by zero";
        }
        else{
            cout << fixed<<setprecision(6) <<(pow(x,3) + 2*x + 1)/(x+3);
        }
        
    }

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

