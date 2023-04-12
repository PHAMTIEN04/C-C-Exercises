#include <bits\stdc++.h>


using namespace std;
int main(){
	int N,i ;
	cin >> N ;
	if ( N <= 50){
		i = ((N-1)/2)+1 ;
		if (i <= N && i > (N-1)/2 ){
			cout << i;
			
		}
	}
	else {
		cout << " Loi Roi Ban Oi ";
	}
	return 0;
}

