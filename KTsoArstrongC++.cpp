#include <bits/stdc++.h>
using namespace std;
int count_digit(int n)
{
//	cin >> n ; 
	int count ;
//	while (n > 0)
//	{
//		n /= 10;
//		count++;
//	}
	for (int i = 1 ; i < n ;i++)
	{
		n /= 10;
		count++;
	}
	return count;
}
//Dem so luong chu so

int is_Armstrong(int n)//Xac nhan la so Armstrong
{
cin>>n ;
	int tmp = n,sum = 0,last;
	while(tmp > 0)
	{
		last = tmp % 10;//chia lay so du
		tmp /= 10;//chia bo chu so cuoi cung
		sum += pow(last, count_digit(n));
	}
	if (sum != n )
	{
		return 0;
	}
	if (sum == n)
	{
	
	
	cout<< sum;
	}
	
	
	
	

	
	
	
	
}



int main(){
	int n;
	
	
	if (is_Armstrong(n) )
	{
		for ( int i = 0 ; i <n; i++)
		{
			
				cout << i << " ";
			}
	}
	else if (is_Armstrong(n))
	{
	
	return 0;
	
	}
	
	
	




}

