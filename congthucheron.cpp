#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 	double a, b, c;
    cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "No Solution" << endl;
        return 0;
    }

    double p = (a + b + c) / 2;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));

    if (s < 1e-10) {
        cout << "No Solution" << endl;
    } else {
        cout << fixed << setprecision(4) << s << endl;
    }

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

