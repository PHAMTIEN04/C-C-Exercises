#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main(){
	ll TC ; cin >> TC ;
	while(TC--){
		int n ; cin >> n ; 
		int a[n];
		for ( int i = 0 ; i < n ; i++ ){
			cin >> a[i];
			
		}
		int check = 0, cnt = 0;
		if(n % 2 == 1 && n > 1  || n % 2 == 0 && n > 2){
			for(int i = 2 ; i < n ; i++){
				for(int j =n-1 ; j >= 0 ; j--){
					if (a[i-2] % 2 == 0 && a[i] % 2 ==0 && a[j] % 2 == 1 && a[j -2] % 2 == 1 ||  n % 2 == 1  && n >= 3  ) {
					cnt++;
				}
				}
			
				
			}
			if(cnt >= 1){
				cout << "Good"<<endl;
			
			}
			else{
				cout <<"Bad"<<endl;
				
			}
////			for (int i = 3 ; i < n ; i++){
////				if (a[i-2] % 2 == 1 && a[i] % 2 == 1){
////					cout <<"GOOD "<<endl;
////					return 0;
////				}
////			}
		}
		else{
			cout <<"BAD"<< endl;
			
		}
	}



	return 0;
}

