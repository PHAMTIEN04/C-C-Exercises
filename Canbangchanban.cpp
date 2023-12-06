#include <bits/stdc++.h>

using namespace std;

int main(){
	int T; cin >> T;
	while(T--){
		int n = 5;
		int a[5];
		for(int i = 0 ; i < n ;i++){
			cin >> a[i];
		}
		
		for(int i = 1; i < n - 1 ;i++){
			if(a[i] < a[i-1]){
				a[i] = a[i] + a[n-1];
				break;
			}
			else if(a[i-1] < a[i]){
				a[i-1] = a[i-1] + a[n-1];
				break;
			}
		}
		bool check = false;
		for(int i = 1 ;i < n - 1;i++ ){
			if(a[i] == a[i-1]){
				check = true;
			}
			else if(a[i] != a[i-1]){
				check = false;
				break;
			}
		}
		if(check == true){
			cout << "Yes"<<endl;
		}
		else if(check == false){
			cout << "No"<<endl;
		}
		
	} 


	return 0;
}

