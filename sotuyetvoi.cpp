#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;cin >> n;
    int g = n;
    unsigned long long a[1000];
    int cnt = 0;
    while(n != 0){
        if(n%2 !=0){
            a[cnt] = 1;
            cnt++;
        }
        if(n%2 != 1){
            a[cnt] = 0;
            cnt++;
        }
        n = n/2;
        
        
    }
    int b[cnt];
    for(int i = 0 ; i < cnt;i++){
        b[cnt-i-1] = a[i]; 
    }
    bool check = false;
    for(int i = 0 ; i < cnt;i++){
        if(a[i] != b[i]) {
            check = true;
            break;
        }
    }
    if(check == true || g %2!=1) {
        cout << "NO";
    }
    if(check == false && g%2!= 0){
        cout << "YES";
    }

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

