#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<int> a(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.begin(), a.end(), greater<int>());
    
    int res = 0;
    for(int i = 0; i < n; i++) {
        res = max(res, a[i] + i + 1);
    }
    
    cout << res + 1 << endl;
    
    return 0;
}

