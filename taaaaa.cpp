#include <bits/stdc++.h>

using namespace std;
int main(){
	int n;
	cin >> n ;
	int a,b;
	cin >> a >> b;
	int s = 0 ;
	int sum = 0;
	//cho dieu kien N thoa 1 <= N <= 10^4
	//cho dieu kien A, B thoa 1 <= A <= B <= 36.
	if(a >= 1 && a <= b && b <= 36 && n >= 1 && n <= pow(10,4))
	{
		for (int  i = 1 ; i <= n ; i++)//chay tu 1 toi n
	{
		if(i >= 10)
		{
		int sodu, songuyen; 
		sodu = i%10;//lay so du 
		songuyen =i/ 10;//lay so nguyen
		s = sodu + songuyen;
		}
		
		// neu s bang trong khoang a - b thi thuc hien phep toan		
		if(s >= a && s <= b)
		{
			
			sum += i;
		
		}
	
		//neu i nho hon 10 va nam trong khoang a - b thi thuc hien phep toan
		if (i <= 10 && i >= a && i <=b)	{
			sum+= i;
		}
		
		
		
	}
	}
	
	
	
	cout << sum;

	return 0;
}

