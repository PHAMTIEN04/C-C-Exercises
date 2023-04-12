#include <bits/stdc++.h>
using namespace std;
bool comp (int a , int b )
{
	return a < b;
}


int main(){
	int n ; 
	cin >> n ;
	vector <int> vt;
	for (int i = 0 ; i < n ; i++)
	{
		int a; cin >> a;
		vt.push_back(a);
	}
	sort(vt.begin() , vt.end(), greater<int>()) ;
	for (int i = 0 ; i < vt.size() ; i++)
	{
		cout << vt[i];
	}
	return 0;
}

