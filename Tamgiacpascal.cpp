#include <iostream>
#include <cmath>
using namespace std;
bool scp(int n)
{
	int can = sqrt(n);
	if (pow(can,2) == n)
	{
		return true;
	}
	return false;
}
int main() {
   int n ; cin >> n;
   int a[100];
   for (int i = 0; i < n; i++){
   	cin >> a[i];
   }
   int min = a[0];
   for (int i = 0 ; i < n ; i++){
   		if(scp(a[i])== true){
   			if(min > a[i])
   			min = a[i];
		   }
   }
	cout << min;
    return 0;
}




