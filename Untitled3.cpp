#include<bits/stdc++.h>
#include <math.h>
using namespace std;
int CheckSoNguyenTo(int n){
	int cnt = 0 ;
	if (n < 2)
	{
		return 0;
	}
	else{
		int i = 2;
		for(;i <= sqrt(n);i++){
		if(n % i == 0){
			cnt++;
		}
		
	}
		 if(cnt == 0){
		 	return n;
    }else{
    	return 0;
    }
	}

} 
int main(){
	
	int n ;
	cin >> n;
//	cout <<CheckSoNguyenTo(n);
	int a[n];
	for (int i = 0 ; i < n ; i++){
		cin >> a[i];
	}
	float cnt = 0 ,sum = 0;
	for (int i = 0 ; i < n ; i++)
	{
		if(CheckSoNguyenTo(a[i])){
			sum += a[i];
			cnt++;
		}
	}
	cout << 1.0 * (sum/cnt);
	return 0;
}

