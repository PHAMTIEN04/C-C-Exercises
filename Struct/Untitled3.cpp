#include <bits/stdc++.h>

using namespace std;
int main(){
	int cnt = 0;
	int sum = 0;
	for (int i = 1 ; i <= 11;i++){
		sum += i;
		cnt++;
	}
	cout <<1.0*(sum/cnt);


	return 0;
}

