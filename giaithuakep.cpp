#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;cin >> n;
    long long sum_l = 1;
    if(n == 0 || n == 1){
        cout << 1;return 0;
    }
    if(n%2!=0){
        for(int i = 1;i <= n;i++){
            if(i%2 !=0){
            sum_l *= i;
            }
        }
        cout << sum_l;
    }
    long long sum_c = 1;
    if(n%2==0){
        for(int i = 1;i <= n;i++){
            if(i%2 ==0){
            sum_c *= i;
                
            }
        }
        cout << sum_c;
    }

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

