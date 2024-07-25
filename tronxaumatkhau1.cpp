#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1; getline(cin,s1);
    string s2; getline(cin,s2);
    string s_new = "";
    int minLength = min(s1.length(), s2.length());

    for(int i = 0 ; i < minLength;i++){
        s_new = s_new + s1[i] + s2[i];
        
    }
    if(s2.length() > minLength){
        for(int i = minLength; i < s2.length();i++){
            s_new = s_new + s2[i];
        }
    }
    else if(s1.length() > minLength){
        for(int i = minLength; i < s1.length();i++){
            s_new = s_new + s1[i];
        }
    }
    cout<< s_new;
    return 0;
}
