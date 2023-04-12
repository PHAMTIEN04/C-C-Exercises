//Chenh lech min-max
#include <bits/stdc++.h>

using namespace std;
int main (){
	
	int n ;
	cin >> n ; 
	int a[n];
	for (int i = 0 ; i < n ; i++)
	{
		cin >> a[i];		
	}
	int min,max ;
	min = a[0];
	max = a[0];
	for( int i = 0 ; i < n ; i++)
	{
		if (max < a[i]  )
		{
			max = a[i];
			
		}
		if (min > a[i])
		{ 
			min = a[i];
		}
	}
	cout << max - min;


	return 0;
}

