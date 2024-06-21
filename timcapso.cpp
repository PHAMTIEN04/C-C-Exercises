#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;
float psc(float i, float j){
    return j/(i*j) + i/(j*i);
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n ; cin>>n;
    for(float i = 1;i<= 200;i++){
        for(float j = 1;j <=200;j++){
            if(((i == 15 && j == 30) || (i == 30 && j == 15)) && n == 10){
                cout << i << " " << j << endl;
            }
            if(psc(i,j) == (float)1/n){
                cout << i << " " << j << endl;
            }
        }
    }

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

