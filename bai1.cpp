#include <bits/stdc++.h>

using namespace std;
int main(){	
	int n ;  cin >> n ; 
	int check = 0, sv = 0 ;
	sv = n;
	while(n !=0){
		check  = n % 10 ;
		n = n / 10 ;
		
		if(check * n == (check + n) * 2)
		{
			cout << sv ; 
			break;
			
			
					}
	
	
}


	return 0;
}

