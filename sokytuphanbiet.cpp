#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#include <bits/stdc++.h>

using namespace std;
bool check(string s,char st){
    for(int i = 0 ; i < s.length() ;i++){
        if(st == s[i]) return true;
    }
    return false;
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  string s ; getline(cin,s);
    string s_new = "";
    for(int i = 0 ; i < s.length();i++){
        if((s[i] >= 'a' && s[i] <='z') && check(s_new,s[i])== false){
            s_new += s[i];
        }
        if((s[i] >= 'A' && s[i] <='Z') && check(s_new,s[i]+32) == false){
            s_new += (s[i]+32);
        }
    }
    cout << s_new.length()<<endl;

	cerr << "\nTime run: " << 1000 * clock() / CLOCKS_PER_SEC << "ms";
	return 0;
}

