#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
      unsigned long long n, m;
    cin >> n >> m;

    vector<unsigned long long> a;
    for(unsigned long long i = 1; i <= 1000000; i++) {
        if((n%i + m%i) >= i) {
            a.push_back(i);
        }
    }

    unsigned long long sum = 0;
    for(unsigned long long i = 0; i < a.size(); i++) {
        unsigned long long cnt = 0;
        for(int j = 1; j <= a[i]; j++) {
            if(a[i] % j == 0) {
                    cnt++;
            }
        }
        sum += cnt;
    }
    cout << sum;


	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

