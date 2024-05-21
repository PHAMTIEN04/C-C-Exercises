#include <bits/stdc++.h>
using namespace std;

int main(){
 

    int n; cin >> n;
    if(n>= 2){
	
    int a[n][2];
    int c1= -1e9,c2 = -1e9;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j < 2 ; j++){
            cin >> a[i][j];
            if(j == 0 && c1 < a[i][j]){
            	c1 = a[i][j];
			}
			if(j == 1 && c2 < a[i][j]){
				c2 = a[i][j];
			}
        }
    }

	cout << c1+c2 <<endl;
}
	return 0;
}
//chua xong :https://coder.husc.edu.vn/problem/hueitc0004
