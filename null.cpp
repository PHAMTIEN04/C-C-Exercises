#include <bits/stdc++.h>

using namespace std;

int fibo(int n ){
	if (n == 0 || n == 1)
	{
		return n;
	}
	else {
		return fibo(n-1) + fibo(n-2);
	}
}

int main(){
	int n; cin >> n ; 
	int a[n];
	for (int i = 0 ; i < n ; i++)
	{
		cin >> a[i];
	}
	sort(a , a + n );
	for (int i = 0 ; i < n ; i++)
	{
	
	
		if (fibo(a[i]) <= a[n-1])
		cout << fibo(a[i]) << " ";
	}
	return 0;
}

