#include <bits/stdc++.h>

using namespace std;
int main(){
	int sn ; 
	vector <int> vt;
	for (int i = 0 ; i < 4 ;i++)
	{
		int a ;
		cin >> a;
		vt.push_back(a);
	}
	
	for (int i = 0 ; i < vt.size() ; i++ )
	{
		
		sn += vt[i];	
		
	}
	cout << "So nut : "<< sn;
	


	return 0;
}

