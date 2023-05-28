#include <bits/stdc++.h>
#include<string.h>

using namespace std;
string upper(string s) {
    string result; // Chu?i t?m d? luu k?t qu?

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            char c = s[i] - 32; // Chuy?n d?i ký t? thành ch? hoa
            result += c; // Thêm ký t? ch? hoa vào chu?i t?m
        } else {
            result += s[i]; // Gi? nguyên ký t? không ph?i ch? cái
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

