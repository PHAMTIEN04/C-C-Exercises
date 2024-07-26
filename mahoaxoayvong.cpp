#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k; cin >> n >> k;
    cin.ignore();
    while(n--){
        string s; getline(cin,s);
        for(int i = 0 ; i < s.length();i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                if(((int)s[i] + k) > 90){
                    int check = ((int)s[i] + k) - 90;
                    s[i] = 65 + (check-1); 
                }else{
                     s[i] = s[i] + k;
                }
               
            }
            
        }
        cout << s<<endl;
    }
    
    return 0;
}
