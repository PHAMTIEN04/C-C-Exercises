#include <bits/stdc++.h>

using namespace std;
int main(){
	int n,s=0,i = 1,a= 1 ; 
	cin >> n;
	while(a <= n )
	{
	    i = i*a;
		s =s + i ;
		a++;
		
		
	}
	cout << s;	
		
	
	return 0;
}

