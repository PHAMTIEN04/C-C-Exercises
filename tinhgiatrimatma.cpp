#include <bits/stdc++.h>
#include<string.h>

using namespace std;
string upper(string s) {
    string result; // Chu?i t?m d? luu k?t qu?

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            char c = s[i] - 32; // Chuy?n d?i k� t? th�nh ch? hoa
            result += c; // Th�m k� t? ch? hoa v�o chu?i t?m
        } else {
            result += s[i]; // Gi? nguy�n k� t? kh�ng ph?i ch? c�i
        }
    }

    return result;
}

int main(){
	string bcc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	cout << bcc.length();
	string str;
	cin >> str;
	string r = upper(str);
	int cs[r.length()];
	for (int i = 0; i < r.length();i++){
		for (int j= 0 ; j < bcc.length();j++ ){
			if(r[i] == bcc[j]){
				cs[i] = j;
			}
		}
	}
//	for(int i = 0 ; i < str.length();i++){
//		cout << cs[i];
//	}
	
	
	int a[26];
	int sum = 0;
	for (int i = 0 ; i< 26; i++){
		cin>> a[i];
	}
	for (int i = 0 ;  i < r.length();i++){
		sum += a[cs[i]];
	}
	 cout << sum;

	return 0;
}

