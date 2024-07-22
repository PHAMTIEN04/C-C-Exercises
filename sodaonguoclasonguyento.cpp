/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;
bool CheckSoNguyenTo(long long n){
	int cnt = 0 ;
	if (n < 2)
	{
		return false;
	}
	else{
		int i = 2;
		for(;i <= sqrt(n);i++){
		if(n % i == 0){
			cnt++;
		}
		
	}
		if(cnt == 0){
		 	return true;
    }	else{
    		return false;
    }
	}

} 
long long daonguoc(long long n){
    long long sum = 0;
    while(n != 0){
        sum = sum * 10;
        sum = sum + (n%10);
        n /= 10;
    }
    return sum;
}
int main()
{
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        if(CheckSoNguyenTo(daonguoc(n)) == true){
            cout << "Yes";
        }else{
            cout << "No";
        }
        cout << endl;
    }
    
    
    return 0;
}
