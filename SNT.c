#include<bits/stdc++.h>
#include <math.h>
//using namespace std;
bool CheckSoNguyenTo(int n){
	int cnt = 0 ;
	if (n < 2)
	{
		return false;
	}
	else{
		int i = 2;
		for(;i <= sqrt(n);i++){
		if(n % i == 0){
			cnt++;
		}
		
	}
		if(cnt == 0){
		 	return true;
    }	else{
    		return false;
    }
	}

} 
int main(){
	
	int n ;
	cin >> n;
	CheckSoNguyenTo(n);

	return 0;
}

