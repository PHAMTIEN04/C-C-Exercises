#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    char s; cin >> s;
    int n ; cin >> n;
    int a[n];
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    if((s == '+') ||( s == '-') || (s == '*') || (s=='/')){
    for(int i = 0 ; i < n;i++){
        for(int j = 0; j < a[i];j++){
            cout << s;
        }   
        cout <<endl;
    }}

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

