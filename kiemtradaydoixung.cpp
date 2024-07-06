#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 	int n;cin >> n;
    int a[n],b[n];
    for(int i = 0 ; i < n;i++){
        cin >> a[i];
        b[n-i-1] = a[i];
    }
    bool check = false;
    for(int i = 0 ; i < n;i++){
        if(a[i] != b[i]) check = true;    
    }
    if(check == true){
        cout << "No";
    }
    else{
        cout << "Yes";
    }

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

