#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main (){
/*Nhap so nguyen N, in ra so luong so nguyen duong be hon hoac bang N^2 
va lon hon hoac bang N+1 (N<= 15)*/

	int N ;
	cin >> N ;
	 
	
	
		for (int i = N+1 ; i <= N*N ; i++){
	       if(N<= 15 ){
	       	cout<<i;
		   }
		   else {
		   	cout<< "QUA GIOI HAN";
		   	break;
		   }
		}
		
	
	
    return 0 ;
}








