#include <bits/stdc++.h>
using namespace std;

bool check_t(const vector<char>& s, char x) {
    for (char c : s) {
        if (x == c) return true;
    }
    return false;
}

int main() {
    string st;
    getline(cin, st);
    
    vector<char> s;
    
    for (char c : st) {
        if (!check_t(s, c) && ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))) {
            s.push_back(c);
        }
    }

    sort(s.begin(), s.end()); 
    
    for (char c : s) {
        int cnt = 0;
        for (char i : st) {
            if (c == i) cnt++;
        }
        cout << c << "    " << cnt << endl;
    }
    
    return 0;
}

