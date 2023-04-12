#include <bits/stdc++.h>
using namespace std;
//Half circumference : Nua chu vi 
//Tinh nua chu vi cua tam giac
int Half_circumference(int a, int b, int c)
{
	int p ;
	p = (a+b+c)/2;
	
	return p;
}

int main(){
	int a,b,c,s,calculate;
	cin >> a >> b >> c; 
	calculate = Half_circumference(a,b,c)*(Half_circumference(a,b,c)-a)*(Half_circumference(a,b,c)-b)*(Half_circumference(a,b,c)-c );
	s =sqrt(calculate);
	cout << s;

	return 0;
}

