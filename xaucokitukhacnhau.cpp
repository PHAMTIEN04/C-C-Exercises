#include <bits/stdc++.h>
using namespace std;

bool check(string a[], int cnt, char x) {
    for (int i = 0; i < cnt; i++) {
        if (a[i][0] == x) return true;
    }
    return false;
}

int main() {
    string s;
    getline(cin, s);
    string a[26];
    int cnt = 0;

    for (int i = 0; i < s.length(); i++) {
        if (!check(a, cnt, s[i])) {
            a[cnt] = s[i];
            cnt++;
        }
    }
    if(cnt != s.length()){
        cout << "no";
    }
    if(cnt == s.length()){
        cout << "yes";
    }
    return 0;
}

