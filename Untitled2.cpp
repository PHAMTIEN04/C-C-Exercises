#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
	int k;cin >> k;	
	int i =1 ;
    string str ;
	while(k != i){
		
		
		str += to_string(i);
		i++;
	}
	cout << str[k-1];



	return 0;
}

