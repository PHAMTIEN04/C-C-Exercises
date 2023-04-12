#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int ktnguyenam(string s){
    int cnt = 0;
    for (int i = 0; i < s.length(); i++){
        char c = tolower(s[i]);
        if (c == 'a' || c == 'o' || c == 'y' || c == 'i' || c == 'e' || c == 'u'){
            cnt++;
        }
    }
    return cnt;
}

int main(){
    string s;
    while (getline(cin, s)){
        
        cout << ktnguyenam(s)<< endl;
    }
    return 0;
}
