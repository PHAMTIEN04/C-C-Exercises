#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;
long long f(long long a,long long b,long long c,long long n){
    if(n == 0) {
        return a;
        
    }
    if(n > 0){
      return f(a,b,c,n-1) + b*n +c;  
    }
    
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long a,b,c,n ; cin >>a>>b>>c >> n;
    cout << f(a,b,c,n);

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

