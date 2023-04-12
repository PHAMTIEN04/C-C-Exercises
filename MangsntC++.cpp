#include <bits/stdc++.h>
#include <windows.h>
using namespace std;
int main(){

	int n,sum ;
	sum = 0 ; 
	cin >> n ; 
	int a[n];
	for (int i = 0 ; i < n ; i++ )
	{
		cin >> a[i];
	}

	
	  for (int i = 0; i < n ; i++)
	  {
	  	
	  		cout << a[i];
	  		
	  		sum += a[i];
	  		if ( i > n-2)
			{
				break;
			}
	  		if (i  < n )
	  		{
			  cout << " + ";
			}
			
	  }	
	  
	  cout << " = " << sum ;
	


	return 0;
}

