#include <bits/stdc++.h>
#include <string>
#include <cctype>


using namespace std;

int main(){
	string s ;
	cin >> s;
	int cnt=1;
	
		for (int i = 1 ;i < s.length();i++){
			if(isalnum(s[i])){
			if(s[i-1]== s[i]){
				cnt++;
				
			}
			else{
				cout << s[i-1]<< cnt;
				cnt=1;
			}
	}
	}
	        cout << s[s.length() - 1] << cnt << endl;



	return 0;
}

