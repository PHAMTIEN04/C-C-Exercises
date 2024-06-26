#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long n ; cin >> n;
    long long l = 0,r = 0;
    long long cnt = 0;
    long long size = n;
    while(size>0){
        cnt++;
        size = size/10;
    }
    if(cnt %2==0){
        while(n > 0){
        r = r*10 + (n%10);
        n = n / 10;
        if(r == n){
            cout << "Yes"; return 0;
        }
        
        
    }
    }
    else{
        while(n > 0){
        r = r*10 + (n%10);
        if(r == n){
            cout << "Yes"; return 0;
        }
        n = n / 10;

    }}

    cout <<"No";

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

