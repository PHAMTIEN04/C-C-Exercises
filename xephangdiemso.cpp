#include <bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	
	int n ; cin >> n;
	double a[n];
	for(int i = 0 ; i < n ; i++){
	        cin>>a[i];
			if(a[i] >= 8.5 && a[i] <= 10){
				cout << "A ";
			}
			else if(a[i] >=8.0){
				cout << "B+ ";
			}
			else if(a[i] >=7.0){
				cout << "B ";
			}
			else if(a[i] >=6.5){
				cout << "C+ ";
			}
			else if(a[i] >=5.5){
				cout << "C ";
			}
			else if(a[i] >=5.0){
				cout << "D+ ";
			}
			else if(a[i] >=0){
				cout << "D ";
			}

		
	}
	

	return 0;
}
