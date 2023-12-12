#include <bits/stdc++.h>

using namespace std;

int main(){
	int m,n; cin >> m; cin >> n;
	int ga = 2;
	int cho = 4;
	int s_ga= 0;
	int s_cho= 0;
	int check_c = 0;
	int check_g = 0;
	int sum = 0;
	bool check = false;
	if(m > 0){
		for(int i = 1 ; i <= m ;i++){
		check_c = check_c + cho;
		check_g = 0;
		for(int j = i + 1;j <= m;j++){
			check_g = check_g + 2;
			sum = check_c + check_g;
			if(sum == n){
				s_cho = i;
				s_ga = m-i;
				check = true;
				break;
			}
		}
		if(sum == n){
			break;
		}
	}
	if(check == true && s_ga > 0 && s_cho > 0){
		cout << "Ga = "<<s_ga << endl;
		cout << "Cho = "<<s_cho << endl;
	}
	else if(check == false){
		cout << -1;
	}
	}




	return 0;
}

