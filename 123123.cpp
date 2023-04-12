#include <bits/stdc++.h>

using namespace std;
long long  string(int n){
	int count;
	while(n)
	{
		if(n%10 == 5 )
		{
			count++;
		}
		n= n/10;
	}
	return count;
}
int main(){
	int n; cin >> n ;
	int sum = 0 ;
	for (int i = 1 ; i <= n ; i++)
	{
		sum += string(i);
	}
	cout <<sum;

	return 0;
}

