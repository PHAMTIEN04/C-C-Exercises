#include <bits/stdc++.h>

using namespace std;
int main(){
	long long  s= 0,sn=0,x  ,check,n; cin >> n ;  
	long long  count = 0 ;

	for (int i = 1 ; i <= n ; i++){	
			s = i % 10 ; //15
			sn = i / 10 ;
			if (s == 5 || sn == 5)
			{
				count++;
			}
			
		}

	cout << count ;
	


	return 0;
}

