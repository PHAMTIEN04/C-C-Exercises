#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n ; cin >> n;cin.ignore();
	string a[n];
	for(int i = 0 ; i < n ; i++){
		getline(cin,a[i]);
	}
	for(int i = 0 ; i < n;i++){
		string s = a[i];
		string r = "";
		for(int j = 0 ; j < s.length();j++){
			switch(s[j]){
				case ' ':{
					r += "%20";
					break;
				}
				case '!':{
					r += "%21";	
					break;
				}
				case '$':{
					r += "%24";	
					break;
				}
				case '%':{
					r += "%25";	
					break;
				}
				case '(':{
					r += "%28";	
					break;
				}
				case ')':{
					r += "%29";	
					break;
				}
				case '*':{
					r += "%2a";	
					break;
				}
				default:{
					r += s[j];
					break;
				}
			}
		}
		cout << "Case #"<<i+1<<": "<<r << endl;
		 
	}


	return 0;
}

