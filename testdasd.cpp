#include <bits/stdc++.h>

using namespace std;
int main(){
	int n;
	cin >> n ;
	int snt[n];
	if (snt[n] < 2 ){
		return 0;
	}
	else {
		for (int i = 2 ; i < n/2 ; i++ )
		{
			if (i%2 == 0 )
			{
				cin >> snt[i];
				cout << snt[i];
			}
		}
		
	}
	



	return 0;
}

