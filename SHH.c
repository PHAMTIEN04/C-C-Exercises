#include <stdio.h>


//using namespace std;
int main(){
	int n ; 
	printf("Check :  ");
	scanf("%d", &n);
	int s ;
	
	for (	int i = 1; i <= n; i++)
	{
		s = 0;
	
		for ( int j = 1; j <= i-1;j++){
		
		if (i % j == 0){

			s+= j;
			
		}
	}
	if (s == i  ){
	printf("So hoan hao : %d\n",i);
		
		}
	}
	
	return 0;
	}





