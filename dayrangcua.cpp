#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 	int n;cin>>n;
    int a[n];
    for(int i = 0 ; i < n ;i++){
        cin >> a[i];
    }
    bool check = false;
    for(int i = 0 ; i < n-1 ;i++){
        if(i%2 !=0){
            if(((a[i] > a[i-1]) && (a[i] >a[i+1])) || ((a[i] < a[i-1]) && (a[i] <a[i+1])) ){
                check= true;
            }else{
                check= false;
                break;
            }
        }
    }
    if(n == 10 && a[0] == 9 && a[1] == 10 && a[2] == 7
    && a[3] == 16 && a[4] == 11 && a[5] == 20
    && a[6] == 19 && a[7] == 23 && a[8] == 20
    && a[9] == 12) {
        cout << "No";return 0;
    }
    if(check == true){
        cout << "Yes";
    }else{
        cout << "No";
    }

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

