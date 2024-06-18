#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 	vector<string> a;
    string temp;

    while (cin >> temp) {
        a.push_back(temp);
    }

    for(int i = 0; i < a.size(); i++) {
        int cnt = 0;
        for(int j = 0; j < a[i].length(); j++) {
            if(a[i][j] >= 'A' && a[i][j] <= 'Z') {
                cnt++;
            }
        }
        if(cnt > (a[i].length() - cnt)) {
            for(int j = 0; j < a[i].length(); j++) {
                if(a[i][j] >= 'a' && a[i][j] <= 'z') {
                    a[i][j] = a[i][j] - 32; 
                }
            }
        } else {
            for(int j = 0; j < a[i].length(); j++) {
                if(a[i][j] >= 'A' && a[i][j] <= 'Z') {
                    a[i][j] = a[i][j] + 32; 
                }
            }
        }
        cout << a[i] << endl;
    }

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

