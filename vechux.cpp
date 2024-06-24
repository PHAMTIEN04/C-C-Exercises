#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n ; cin >>n;
    int l = 1;
    int r = n*2+1;
    for(int i = 1; i <= n*2+1 ;i++){
        for(int j = 1 ; j <= n*2+1;j++){
            if(j == l || j == r){
                cout <<"*" << " ";
            }    
            else{
                cout <<"." << " ";
            }
        }
        cout << endl;
        l+=1;
        r-=1;
    }

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

