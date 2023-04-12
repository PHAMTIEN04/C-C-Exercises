#include <bits/stdc++.h>
using namespace std;


#define ll long long 

int cnt[1000002];
int main(){
	
	int TC ; cin >> TC;
	while(TC--) //dem bo test case
	{
		int n ,  k ; cin >> n >> k ; 
		int a[n];
		for (int i = 0 ; i < n ; i++ )  
		{
			cin >> a[i];
		}
		sort(a, a+ n , greater<int>());
		for (int i = 0 ; i < k ; i++)
		{
			cout << a[i] << " ";
		}
			cout << endl;
	}
	



	return 0;
	
}



